#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: addres pointer to list struct list_t
 * @n: data int
 * Return: the addres to current list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		newList->next = *head;
		newList->prev = NULL;
		if (*head != NULL)
			prevList->prev = newList;
		*head = newList;
		return (newList);
	}
}
