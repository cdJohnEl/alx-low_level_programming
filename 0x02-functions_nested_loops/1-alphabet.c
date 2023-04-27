#include "main.h"
/**
 * print_alphabet - this program prints the alphabet in lower case
 * follwed by a new line
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
