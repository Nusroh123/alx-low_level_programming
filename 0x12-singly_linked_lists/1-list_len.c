#include "lists.h"

/**
 * list_len - print the number of elements in a list
 * @h: a singly list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t count;

	current = h;
	count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}

