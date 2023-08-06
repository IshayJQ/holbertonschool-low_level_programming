#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len -  number of elements in a linked list
 * @h: pointer to struct list_t const
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
