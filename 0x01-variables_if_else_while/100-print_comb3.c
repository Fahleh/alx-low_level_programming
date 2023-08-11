#include <stdio.h>
/**
 * main:- A program that prints all possible combinations of two digits
 * followed by a comma and a space.
 *
 * Return:- 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
Task 10: A program that prints all possible different combinations of two digits separated by a comma and a space.
