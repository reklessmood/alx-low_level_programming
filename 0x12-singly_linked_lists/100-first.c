#include <stdio.h>

/**
 * print_message - Prints the additional message before main is executed.
 * This function is called automatically before main starts executing.
 */
void print_message(void) __attribute__((constructor));

void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
