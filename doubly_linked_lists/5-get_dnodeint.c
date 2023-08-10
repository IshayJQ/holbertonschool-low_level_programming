#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index -  get node by the index
 * @head: addres pointer to the head list struct list_t
 * Return: the addres of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cont;

	for (cont = 0; cont < index; cont++)
	{
		head = head->next;
	}
	return (head);
}
