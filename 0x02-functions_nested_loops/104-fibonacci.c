#include <stdio.h>

/**
 * main:- A program that printa the first 98 Fibonacci numbers
 * starting with 1 and 2, ans separated buy a comma and a space
 *
 * Return: Always success (0)
 */

int main(void)
{
	int count;
	unsigned long sum;
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	unsigned long fib1_div, fib1_mod, fib2_div, fib2_mod;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	fib1_div = fib1 / 10000000000;
	fib1_mod = fib1 % 10000000000;
	fib2_div = fib2 / 10000000000;
	fib2_mod = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fib1_div + fib2_div;
		half2 = fib1_mod + fib2_mod;
		if (fib1_mod + fib2_mod > 10000000000)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");
		fib1_div = fib2_div;
		fib1_mod = fib2_mod;
		fib2_div = half1;
		fib2_mod = half2;
	}
	printf("\n");
	return (0);
}
