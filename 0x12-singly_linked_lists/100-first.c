#include<stdio.h>


void launchFxn(void) __attribute__ ((constructor));

/**
 * first - Prints a couple of strings  before
 * the main function.
 */

void launchFxn(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
