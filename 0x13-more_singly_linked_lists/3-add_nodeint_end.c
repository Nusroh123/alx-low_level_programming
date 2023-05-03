#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * getIntLen - calculate the length of an integer
 * @num: number to be calculated
 * Return: number of digits
 */
int getIntLen(int num)
{
	unsigned int digit;

	digit = 1;

	while (num >= 10)
	{
		num /= 10;
		digit++;
	}
	return (digit);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer
 * @n: integer number
 * Return:  address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x, *y;
	unsigned int len;

	len = getIntLen(n);

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);
	x->n = n;
	if (!(x->n))
	{
		free(x);
		return (NULL);
	}
	while (len)
		len++;
	x->next = NULL;
	if (*head == NULL)
	{
		*head = x;
		return (x);
	}
	while (y->next)
		y = y->next;
	y = *head;
	y->next = x;
	return (x);

}
