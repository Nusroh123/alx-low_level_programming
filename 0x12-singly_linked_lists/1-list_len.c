#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: string
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
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
