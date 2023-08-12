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
	dlistint_t *listNode = *h, *newList = NULL, *lastNode = NULL, *size = *h;
	unsigned int cont;
	int res = 0;

	for (cont = 1 ; size->next != NULL; cont++)
		size = size->next;
	res = idx - cont;
	if (res >= 1 && *h != NULL)
		newList = NULL;
	else
	{
		if (*h == NULL || idx - cont == 0)
		{
			newList = add_dnodeint_end(&listNode, n);
			return (newList);
		}
		else if (idx == 0)
			newList = add_dnodeint(&listNode, n);
		else
		{
			for (cont = 0; cont < idx; cont++)
			{
				if (cont == idx - 1)
					lastNode = listNode;
				listNode = listNode->next;
			}
			add_dnodeint(&newList, n);
			listNode->prev = newList;
			newList->prev = lastNode;
			newList->next = listNode;
			lastNode->next = newList;
		}
	}
	return (newList);
}
