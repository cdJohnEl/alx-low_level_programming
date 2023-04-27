#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: on success a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *ptStr;
	int length, c = 0;

	if (str == NULL)
		return (NULL);
	length = 0;
	while (str[length] != '\0')
		length++;

	ptStr = malloc(sizeof(char) * (length + 1));

	if (ptStr == NULL)
		return (NULL);

	for (c = 0; str[c]; c++)
		ptStr[c] = str[c];

	return (ptStr);
}
