#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;

	unsigned int i;

	size_t len;

	len = 0;

	temp = h;

	while (temp)
	{
		i++;
		temp = temp->next;
	}
	while (h)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
			h = h->next;
		}	len++;
	}
	return (len);
}
