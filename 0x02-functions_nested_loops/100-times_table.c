#include "main.h"

/**
 * print_times_table:- A function that prints the n times table,
 * starting with 0. If n is greater than 15 or less than 0,
 * the function does nothing.
 *
 * @n: the number of the times table
 *
 * Return: void
*/

void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int prod = i * j;

			if (j == 0)
				_putchar('0');
			else if (prod < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else if (prod < 100)
			{
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar((prod / 100) + '0');
				_putchar(((prod / 10) % 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
