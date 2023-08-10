#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint -  frees a lists
 * @head: addres pointer to the head list struct list_t
 * Return: the addres to the head list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freeNext;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			freeNext = head->next;
			free(head);
			head = freeNext;
		}
		free(head);
	}
}
