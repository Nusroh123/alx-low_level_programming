#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list.
 * @head: pointer at the head
 * @str: string which is the dat
 * Return: the address of the new eleent
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len;

	len = strlen(str);

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	*head = newNode;
	if (newNode)
		len++;
	return (*head);
}
