#include "lists.h"

/**
 * dlistint_len - print length...
 * @h: int
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
