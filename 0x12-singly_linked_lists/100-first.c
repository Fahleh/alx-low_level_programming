#include<stdio.h>

/**
 * launchFn - Function to be excuted at launch
 */

void launchFn(void)__attribute__ ((constructor));

/**
 * launchFn - Function implementation
 */

void launchFn(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
