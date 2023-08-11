#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index -  insert new node by the index
 * @h: addres pointer to the head list struct list_t
 * @idx: the number node
 * @n: int number data
 * Return: the addres of the node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *listNode, *newList, *lastNode;
	unsigned int cont;

	listNode = *h;
	lastNode = NULL;
	newList = malloc(sizeof(dlistint_t));

	if (newList == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	if (*h == NULL)
	{
		newList->n = n;
		newList->next = NULL;
		newList->prev = NULL;
		*h = newList;
	}
	else
	{
		for (cont = 0; cont < idx; cont++)
		{
			if (cont == idx - 1)
				lastNode = listNode;
			listNode = listNode->next;
			if (listNode == NULL)
				return (NULL);
		}
		newList->prev = listNode->prev;
		newList->next = listNode;
		newList->n = n;
		listNode->prev = newList;
		if (lastNode != NULL)
			lastNode->next = newList;
		else
			*h = newList;
	}
	return (newList);
}
