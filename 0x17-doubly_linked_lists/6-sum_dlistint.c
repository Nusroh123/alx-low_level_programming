#include "lists.h"

/**
 * sum_dlistint - sums all the data...
 * @head: nde
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = malloc(sizeof(dlistint_t));
	int sum;

	current = head;
	sum = 0;

	if (current == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
