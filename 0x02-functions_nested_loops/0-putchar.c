#include <unistd.h>
#include "main.h"

/**
 * main:- Entry point
 *
 * Description:- A program that prints _putchar, followed by a new line.
 *
 * Return:- Always Success (0)
 */

int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
