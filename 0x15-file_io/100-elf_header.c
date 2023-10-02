#include "main.h"

/**
 * main - A program that displays the ELF header
 *
 * description: Displays the information contained in the ELF header
 * @argc: Number of arguments
 * @argv: Array of pointets to arguments
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char *argv[])
{
	int opn;
	Elf64_Ehdr *h;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	opn = open(argv[1], O_RDONLY);
	if (opn == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]), exit(98);
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
		dprintf(STDERR_FILENO, "Error: malloc failed\n"), exit(98);
	if (read(opn, h, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	if (h->e_ident[EI_MAG0] != ELFMAG0 || h->e_ident[EI_MAG1] != ELFMAG1 ||
	    h->e_ident[EI_MAG2] != ELFMAG2 || h->e_ident[EI_MAG3] != ELFMAG3)
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n"), exit(98);
	printf("ELF Header:\n");
	printf("Magic: %02x %02x %02x %02x\n", h->e_ident[EI_MAG0], h->e_ident[EI_MAG1],
	       h->e_ident[EI_MAG2], h->e_ident[EI_MAG3]);
	printf("Class: %s\n", h->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data: %s\n", h->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			"2's complement, big endian");
	printf("Version: %d (current)\n", h->e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", h->e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX - System V" : "UNIX - System V");
	printf("ABI Version: %d\n", h->e_ident[EI_ABIVERSION]);
	printf("Type: %s\n", h->e_type == ET_EXEC ?
			"EXEC (Executable file)" : "EXEC (Executable file)");
	printf("Entry point address: 0x%lx (bytes into file)\n", h->e_entry);
	printf("Start of program headers: %ld (bytes into file)\n", h->e_phoff);
	printf("Start of section headers: %ld (bytes into file)\n", h->e_shoff);
	printf("Flags: 0x%x\n", h->e_flags);
	printf("Size of this header: %d (bytes)\n", h->e_ehsize);
	printf("Size of program headers: %d (bytes)\n", h->e_phentsize);
	printf("Number of program headers: %d\n", h->e_phnum);
	printf("Size of section headers: %d (bytes)\n", h->e_shentsize);
	printf("Number of section headers: %d\n", h->e_shnum);
	printf("Section header string table index: %d\n", h->e_shstrndx);
	if (close(opn) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opn), exit(98);
	return (0);
}
