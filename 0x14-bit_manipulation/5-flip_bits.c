#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int counter = 0;

	while (x != 0)
	{
	if (x & 1)
	{
		counter++;
	}
	x >>= 1;
	}
	return (counter);
}
