#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: a singly linked list
 * Return: no of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t len;
	int count;

	temp = h;
	count = 0;
	len = 0;

	while(temp != NULL)
	{
		if (temp->str != NULL)
		{
			len = strlen(temp->str);
			printf("[%ld] %s\n", len, temp->str);
		}
		else
			printf("[0] (nil)\n");

		temp = temp->next;
		count++;
	}

	return (count);
}
