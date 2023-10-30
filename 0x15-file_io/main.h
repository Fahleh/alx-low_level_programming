#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Helper functions */
void _checkElf(unsigned char *e_ident);
void _printMagic(unsigned char *e_ident);
void _printClass(unsigned char *e_ident);
void _printData(unsigned char *e_ident);
void _printVersion(unsigned char *e_ident);
void _print_os_abi(unsigned char *e_ident);
void _printAbi(unsigned char *e_ident);
void _printType(unsigned int e_type, unsigned char *e_ident);
void _printEntry(unsigned long int e_entry, unsigned char *e_ident);
void _elfClose(int felf);

#endif
