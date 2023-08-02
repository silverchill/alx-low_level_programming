#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - To print that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n)
 * @head: The head of double pointer
 * Return: linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *begin;
	int n;

	if (*head == NULL || head == NULL)
		return (0);
	begin = *head;
	*head = begin->next;
	n = begin->n;
	free(begin);
	return (n);
}
