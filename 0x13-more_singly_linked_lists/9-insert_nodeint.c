#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: Pointer to the pointer of the head of the list.
 * @idx: index where the new node should be added
 * @n: data value of the new node
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nnode, *current;
	unsigned int count;

	nnode = malloc(sizeof(listint_t));
	current = *head;
	count = 0;

	if (head == NULL)
		return (NULL);

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;

	if (idx == 0)
	{
		nnode->next = *head;
		*head = nnode;
		return (nnode);
	}

	while (current != NULL)
	{
		if (idx == count + 1)
		{
			nnode->next = current->next;
			current->next = nnode;
			return (nnode);
		}
		current = current->next;/*move to the next node*/
		count++;
	}
	return (NULL);
}
