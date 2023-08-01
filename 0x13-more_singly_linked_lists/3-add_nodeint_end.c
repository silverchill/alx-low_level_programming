#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - To print fxn that adds a new node at the end of
 * a listint_t list
 * @head: The head of the double pointer
 * @n: The no of the list
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *old_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	old_node = *head;

	while (old_node->next != NULL)
	{
		old_node = old_node->next;
	}
	old_node->next = new_node;

	return (new_node);
}
