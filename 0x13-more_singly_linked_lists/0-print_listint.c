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

	temp = h;

	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
