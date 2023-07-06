#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head pointer to a pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
