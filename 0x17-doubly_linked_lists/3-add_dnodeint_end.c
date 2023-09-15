#include "lists.h"

/**
 * add_dnodeint_end - add node at the end...
 * @head: node
 * @n: data
 * Return: new node address or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	newNode->n = n;
	newNode->next = NULL;

	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		newNode->prev = current;
		current->next = newNode;
	}
	return (newNode);
}
