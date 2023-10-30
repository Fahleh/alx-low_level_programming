#include "main.h"

/**
 * main - A program that displays the information contained in the
 * ELF header at the start of an ELF file.
 *
 * @argc: Number of arguments supplied.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *hdr;
	int opn, rd;

	opn = open(argv[1], O_RDONLY);
	if (opn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	hdr = malloc(sizeof(Elf64_Ehdr));
	if (hdr == NULL)
	{
		_elfClose(opn);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(opn, hdr, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(hdr);
		_elfClose(opn);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	_checkElf(hdr->e_ident);
	printf("ELF Header:\n");
	_printMagic(hdr->e_ident);
	_printClass(hdr->e_ident);
	_printData(hdr->e_ident);
	_printVersion(hdr->e_ident);
	_print_os_abi(hdr->e_ident);
	_printAbi(hdr->e_ident);
	_printType(hdr->e_type, hdr->e_ident);
	_printEntry(hdr->e_entry, hdr->e_ident);

	free(hdr);
	_elfClose(opn);
	return (0);
}

/**
 * _checkElf - A function that checks if a file is an ELF file.
 *
 * @e_ident: pointer to array containing the ELF magic numbers.
 */

void _checkElf(unsigned char *e_ident)
{
        int idx;

        for (idx = 0; idx < 4; idx++)
        {
                if (e_ident[idx] != 127 &&
                e_ident[idx] != 'E' &&
                e_ident[idx] != 'L' &&
                e_ident[idx] != 'F')
                {
                        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
                        exit(98);
                }
        }
}

/**
 * _printMagic - A function that prints an ELF header's magic numbers.
 *
 * @e_ident: Pointer to array containing the ELF magic numbers.
 */

void _printMagic(unsigned char *e_ident)
{
        int idx;

        printf("  Magic:   ");
        for (idx = 0; idx < EI_NIDENT; idx++)
        {
                printf("%02x", e_ident[idx]);
                if (idx == EI_NIDENT - 1)
                        printf("\n");
                else
                        printf(" ");
        }
}

/**
 * _printClass - A function that prints an ELF header's class.
 *
 * @e_ident: Pointer to array containing the ELF class.
 */

void _printClass(unsigned char *e_ident)
{
        printf("  Class:                             ");
        switch (e_ident[EI_CLASS])
        {
                case ELFCLASSNONE:
                        printf("none\n");
                        break;
                case ELFCLASS32:
                        printf("ELF32\n");
                        break;
                case ELFCLASS64:
                        printf("ELF64\n");
                        break;
                default:
                        printf("<unknown: %x>\n", e_ident[EI_CLASS]);
        }
}

/**
 * _printData - A function that prints an ELF header's data.
 *
 * @e_ident: Pointer to array containing the ELF class.
 */

void _printData(unsigned char *e_ident)
{
        printf("  Data:                              ");

        switch (e_ident[EI_DATA])
        {
                case ELFDATANONE:
                        printf("none\n");
                        break;
                case ELFDATA2LSB:
                        printf("2's complement, little endian\n");
                        break;
                case ELFDATA2MSB:
                        printf("2's complement, big endian\n");
                        break;
                default:
                        printf("<unknown: %x>\n", e_ident[EI_CLASS]);
        }
}

/**
 * _printVersion - A functtion that prints an ELF header's version.
 *
 * @e_ident: A pointer to an array containing the ELF version.
 */

void _printVersion(unsigned char *e_ident)
{
        printf("  Version:                           %d",
               e_ident[EI_VERSION]);

        switch (e_ident[EI_VERSION])
        {
                case EV_CURRENT:
                        printf(" (current)\n");
                        break;
                default:
                        printf("\n");
                        break;
        }
}

/**
 * _print_os_abi - A function that prints an ELF header's OS/ABI.
 *
 * @e_ident: A pointer to an array containing the ELF version.
 */

void _print_os_abi(unsigned char *e_ident)
{
        printf("  OS/ABI:                            ");

        switch (e_ident[EI_OSABI])
        {
                case ELFOSABI_NONE:
                        printf("UNIX - System V\n");
                        break;
                case ELFOSABI_HPUX:
                        printf("UNIX - HP-UX\n");
                        break;
                case ELFOSABI_NETBSD:
                        printf("UNIX - NetBSD\n");
                        break;
                case ELFOSABI_LINUX:
                        printf("UNIX - Linux\n");
                        break;
                case ELFOSABI_SOLARIS:
                        printf("UNIX - Solaris\n");
                        break;
                case ELFOSABI_IRIX:
                        printf("UNIX - IRIX\n");
                        break;
                case ELFOSABI_FREEBSD:
                        printf("UNIX - FreeBSD\n");
                        break;
                case ELFOSABI_TRU64:
                        printf("UNIX - TRU64\n");
                        break;
                case ELFOSABI_ARM:
                        printf("ARM\n");
                        break;
                case ELFOSABI_STANDALONE:
                        printf("Standalone App\n");
                        break;
                default:
                        printf("<unknown: %x>\n", e_ident[EI_OSABI]);
        }
}

/**
 * _printAbi - A function that prints an ELF header's ABI version.
 *
 * @e_ident: Pointer to array containing the ELF ABI version.
 */

void _printAbi(unsigned char *e_ident)
{
        printf("  ABI Version:                       %d\n",
               e_ident[EI_ABIVERSION]);
}


/**
 * _printType - A function that prints an ELF header's type.
 *
 * @e_type: The ELF type.
 * @e_ident: Pointer to array containing the ELF class.
 */

void _printType(unsigned int e_type, unsigned char *e_ident)
{
        if (e_ident[EI_DATA] == ELFDATA2MSB)
                e_type >>= 8;

        printf("  Type:                              ");

        switch (e_type)
        {
                case ET_NONE:
                        printf("NONE (None)\n");
                        break;
                case ET_REL:
                        printf("REL (Relocatable file)\n");
                        break;
                case ET_EXEC:
                        printf("EXEC (Executable file)\n");
                        break;
                case ET_DYN:
                        printf("DYN (Shared object file)\n");
                        break;
                case ET_CORE:
                        printf("CORE (Core file)\n");
                        break;
                default:
                        printf("<unknown: %x>\n", e_type);
        }
}

/**
 * _printEntry - A function that prints an ELF header's entry point.
 *
 * @e_entry: Address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */

void _printEntry(unsigned long int e_entry, unsigned char *e_ident)
{
        printf("  Entry point address:               ");

        if (e_ident[EI_DATA] == ELFDATA2MSB)
        {
                e_entry = ((e_entry << 8) & 0xFF00FF00) |
                          ((e_entry >> 8) & 0xFF00FF);
                e_entry = (e_entry << 16) | (e_entry >> 16);
        }

        if (e_ident[EI_CLASS] == ELFCLASS32)
                printf("%#x\n", (unsigned int)e_entry);

        else
                printf("%#lx\n", e_entry);
}

/**
 * _elfClose - A function that closes an ELF file.
 *
 * @felf: Descriptor of the ELF file.
 */

void _elfClose(int felf)
{
        if (close(felf) == -1)
        {
                dprintf(STDERR_FILENO,
                        "Error: Can't close fd %d\n", felf);
                exit(98);
        }
}
