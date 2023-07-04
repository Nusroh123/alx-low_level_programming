#include "lists.h"

/**
 * free_list -  free the dynamically allocated spaces in the memory
 * @head: list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
