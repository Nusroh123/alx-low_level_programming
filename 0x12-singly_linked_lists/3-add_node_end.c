#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add a node at the end of a linked list
 * @head: pointer
 * @str: data
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *q;
	unsigned int lenght;

	lenght = 0;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	if (p->str == NULL)
		return (NULL);
	p->str = strdup(str);
	if (p->str == NULL)
	{
		free(p);
		return (NULL);
	}
	while (str[lenght])
		lenght++;
	p->len = lenght;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
		return (p);
	}
	q = *head;

	while (q->next)
	{
		q = q->next;
	}
	q->next = p;
	return (p);
}
