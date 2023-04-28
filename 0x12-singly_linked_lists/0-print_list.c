#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints a list
 * list_t: singly linked list
 * @h: a pointer
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
