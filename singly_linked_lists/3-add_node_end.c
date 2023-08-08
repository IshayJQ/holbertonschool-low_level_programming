#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node -  adds a new node at the end of a list
 * @head: addres pointer to the head list struct list_t
 * @str: pointer to string
 * Return: the addres to the head list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newList;
	list_t *lastList = *head;

	newList = malloc(sizeof(list_t));
	if (newList == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	else
	{
		newList->str = strdup(str);
		newList->len = strlen(str);
		if (*head != NULL)
		{
			lastList->next = newList;
			newList->next = NULL;
			return (*head);
		}
		newList->next = *head;
		*head = newList;
		return (newList);
	}
}
