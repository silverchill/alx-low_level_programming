#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - To print fxn that deletes the node at index
 * index of a listint_t linked list
 * @head: The head of the double pointer
 * @index: The index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node, *next;
	unsigned int b = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	old_node = *head;

	while (b < index - 1)
	{
		{
			if (old_node->next == NULL)
				return (-1);
			old_node = old_node->next;
		}
		b++;
	}
	next = old_node->next;
	old_node->next = next->next;
	free(next);
	return (1);
}
