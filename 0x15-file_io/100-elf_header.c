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
