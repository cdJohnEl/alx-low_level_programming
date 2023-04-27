#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0) Success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, num;

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
