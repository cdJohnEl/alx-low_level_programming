#include <stdio.h>

/**
 * __attribute__((constructor)) prefix - Prints a message before main function is executed.
 *
 * Return: None.
 */
void prefix(void) __attribute__((constructor));

void prefix(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
