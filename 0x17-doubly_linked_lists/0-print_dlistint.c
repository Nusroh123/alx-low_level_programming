#include "lists.h"

/**
 * print_dlistint - print int...
 * @h: int
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
