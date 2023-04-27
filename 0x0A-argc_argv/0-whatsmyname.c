#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: Arugument count
 * @argv: Arguemnet vector
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
