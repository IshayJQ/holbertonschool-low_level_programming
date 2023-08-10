#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end -  new node at the end of a list
 * @head: addres pointer to the head list struct list_t
 * @n: integer number
 * Return: the addres to the head list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newList;
	dlistint_t *prevList = *head;

	newList = malloc(sizeof(dlistint_t));
	if (newList == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	else
	{
		newList->n = n;
		if (*head != NULL)
		{
			while (prevList->next != NULL)
				prevList = prevList->next;
			newList->prev = prevList;
			newList->next = NULL;
			prevList->next = newList;
			return (*head);
		}
		newList->next = *head;
		newList->prev = prevList;
		*head = newList;
		return (newList);
	}
}
