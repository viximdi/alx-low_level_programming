#include <stdio.h>

/**
 * executeBeforeMain - Constructor attribute ensures this function is executed
 * before main().
 */
void executeBeforeMain(void) __attribute__ ((constructor));

/**
 * executeBeforeMain - Implementation of the function executed before main.
 */
void executeBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
