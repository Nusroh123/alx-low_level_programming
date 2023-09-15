#include "lists.h"

/**
 * insert_dnodeint_at_index - insert ..
 * @h: node
 * @idx: index
 * @n: data
 * Return: newNode adress of NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *current;
	unsigned int currentIndex;

	currentIndex = 0;
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;

		*h = newNode;
		return (newNode);
	}
	current = *h;
	while (currentIndex < idx - 1 && current)
	{
		current = current->next;
		currentIndex++;
	}

	if (!current)
	{
		free(newNode);
		return (NULL);
	}

	newNode->prev = current;
	newNode->next = current->next;
	if (current->next)
		current->next->prev = newNode;

	current->next = newNode;
	return (newNode);
}
