#include <stdio.h>
#include "lists.h"

/**
 * listint_len -returns the number of elements in a linked listint_t list.
 * @h: pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;

	unsigned int i;

	i = 0;

	temp = h;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
