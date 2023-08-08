#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list -  frees a lists
 * @head: addres pointer to the head list struct list_t
 * Return: the addres to the head list
 */

void free_list(list_t *head)
{
	list_t *freeNext;

	while (head->next != NULL)
	{
		freeNext = head->next;
		free(head->str);
		free(head);
		head = freeNext;
	}
	if (head->next == NULL)
	{
		free(head->str);
		free(head);
	}
}
