#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: linked list
 * Return:  number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
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
