#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: Pointer to the pointer of the head of the list
 * @index: Index where the node should be deleted
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count;

	count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL)
	{
		if (count == index - 1)
		{
			temp = current->next;
			if (temp == NULL)
			return (-1);

			current->next = temp->next;
			free(temp);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
