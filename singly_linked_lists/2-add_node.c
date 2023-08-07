#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node -  print the string of each node
 * @head: addres pointer to struct list_t
 * @str: pointer to string
 * Return: the addres to next list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newList;

	newList = malloc(sizeof(list_t));
	if (newList == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	else
	{
		newList->str = strdup(str);
		newList->next = *head;
		newList->len = strlen(str);
		*head = newList;
		return (newList);
	}
}
