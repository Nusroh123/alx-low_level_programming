#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to another pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t **f;

	while (head)
	{
		f = head;
		free(head);
		free(*head);
		head = f;

	}
}
