#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * getIntLength - calculate the lenght of a number
 * @num: number to be calculated
 * Return: num
 */
int getIntLength(int num)
{
	unsigned int digit;

	digit = 0;

	while (num >= 10)
	{
		num /= 10;
		digit++;
	}
	return (digit);
}
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer
 * @n: interger data
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNodeint;
	unsigned int len;

	len = getIntLength(n);

	newNodeint = malloc(sizeof(listint_t));

	if (!newNodeint)
		return (NULL);
	newNodeint->n = n;
	newNodeint->next = (*head);
	*head = newNodeint;
	if (newNodeint)
		len++;
	return (*head);
}
