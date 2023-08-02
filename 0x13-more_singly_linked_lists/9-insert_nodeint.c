#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - To print fxn that inserts a new node
 * at a given position
 *
 * @head: The head of the double pointer
 * @idx: The index of the list where the new node should be added
 * @n: The new node of the list
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int r = 0;
	listint_t *old_node, *new_node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		old_node = *head;

		while (r < idx - 1 && old_node != NULL)
		{
			{
				old_node = old_node->next;
			}
			r++;
		}
		if (old_node == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = old_node->next;
	old_node->next = new_node;
	return (new_node);
}
