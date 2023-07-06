#include "lists.h"

/**
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	current = head;
	sum = 0;

	if (head == NULL)
		return (0);

	while (current !=  NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
