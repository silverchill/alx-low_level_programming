#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - To print fxn that reverses a listint_t linked list
 * @head: The head of the pointer
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *former;

	if (*head == NULL || head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	former = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = next;
	}
	*head = former;
	return (*head);
}
