#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a list
 * @head: pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	while (head)
	{
		f = head->next;
		free(head);
		head = f;
	}
}
