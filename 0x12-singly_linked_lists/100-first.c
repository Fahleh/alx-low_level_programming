#include<stdio.h>

/**
 * launchFn - Apply the constructor attribute to launchFn so that it
 * is executed before main
 */

void myStartupFun(void) __attribute__ ((constructor));

/**
 * launchFn - launchFn implementation
 */

void launchFn(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
