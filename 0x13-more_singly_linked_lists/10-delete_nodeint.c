#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevNode;
	listint_t *deleteNode;

	if (*head == NULL)
	return (-1);
	
	if (index == 0)
	{
		deleteNode = *head;
		*head = (*head)->next;
		free(deleteNode);
		return (1);
	}
	prevNode = *head;
	deleteNode = prevNode->next;

	while (index > 1 && deleteNode != NULL)
	{
		prevNode = deleteNode;
		deleteNode = deleteNode->next;
		index--;
	}
	if (deleteNode == NULL)
	{
		return (-1);
	}
	prevNode->next = deleteNode->next;
	free(deleteNode);
	return (1);
}
