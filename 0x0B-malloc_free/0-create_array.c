#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array -  creates an array of chars
 * @size: size of array
 * @c: char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ptArr;
	unsigned int counter;

	ptArr = malloc(size * sizeof(char));
	if (size == 0 || ptArr ==  NULL)
	{
		return (NULL);
	}
	for (counter = 0; counter < size; counter++)
	{
		ptArr[counter] = c;
	}
	return (ptArr);
}
