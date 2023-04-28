#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list
 * @head: pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tLst;

	while (head)
	{
		tLst = head->next;
		free(head->str);
		free(head);
		head = tLst;
	}
}
