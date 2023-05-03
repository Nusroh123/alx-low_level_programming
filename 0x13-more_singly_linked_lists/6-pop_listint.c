#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to pointer
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;

	int rval;

	rval = -1;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	rval = (*head)->n;
	free(*head);
	*head = temp;
	return (rval);
}
