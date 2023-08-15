#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index -  delet node by the index
 * @head: addres pointer to the head list struct list_t
 * @index: the number node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *listNode = *head, *prevNode = NULL, *nextNode = NULL;
	unsigned int cont;

	if (*head != NULL)
	{
		for (cont = 0; cont < index && listNode != NULL; cont++)
			listNode = listNode->next;
		if (listNode == NULL)
			return (-1);
		if (listNode->prev == NULL && listNode->next != NULL)
		{
			nextNode = listNode->next;
			nextNode->prev = listNode->prev;
			*head = nextNode;
		}
		else if (listNode->prev == NULL && listNode->next == NULL)
			*head = NULL;
		else if (listNode->next == NULL)
		{
			prevNode = listNode->prev;
			prevNode->next = listNode->next;
		}
		else
		{
			prevNode = listNode->prev;
			nextNode = listNode->next;
			prevNode->next = nextNode;
			nextNode->prev = prevNode;
		}
		return (1);
	}
	return (-1);
}
