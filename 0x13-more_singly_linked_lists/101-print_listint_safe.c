#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *tmp;
	size_t count = 0;

	while (current != NULL)
	{
	count++;
	printf("[%p] %d\n", (void *)current, current->n);
	tmp = current;
	current = current->next;
	if (tmp <= current)
	{
		printf("-> [%p] %d\n", (void *)current, current->n);
		exit(98);
		}
	}

	return (count);
}
