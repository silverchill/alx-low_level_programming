#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - To print fxn that returns the nth node
 * of a listint_t linked list
 * @head: The head of a pointer
 * @index: The index of the node, starting at 0
 * Return: Null if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;

	if (head == NULL)
		return (NULL);
	while (k < index)
	{
		{
			head = head->next;
			if (head == NULL)
				return (NULL);
		}
		k++;
	}
	return (head);
}
