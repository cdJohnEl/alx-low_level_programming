#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 *
 * Return: char pointer to newly allocated place in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int q, r, p;
	char *s;

	if (s1 == NULL)
		q = 0;
	else
	{
		for (q = 0; s1[q]; q++)
			;
	}
	if (s2 == NULL)
		r = 0;
	else
	{
		for (r = 0; s2[r]; r++)
			;
	}
	if (r > n)
		r = n;
	s = malloc(sizeof(char) * (q + r + 1));
	if (s == NULL)
		return (NULL);
	for (p = 0; p < q; p++)
		s[p] = s1[p];
	for (p = 0; p < r; p++)
		s[p + q] = s2[p];
	s[q + r] = '\0';
	return (s);
}
