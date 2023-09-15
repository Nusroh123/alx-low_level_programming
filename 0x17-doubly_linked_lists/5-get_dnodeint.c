#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node...
 * @head: node
 * @index: position
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
