#include "lists.h"

/**
 * add_nodeint - adds a node...
 * @head: node
 * @n: the int
 * Return: node address or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t*)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	*head = newNode;
	return (newNode);
}
