#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint -  print the int of each list
 * @h: pointer to struct dlistint_t const
 * Return: the number of lists
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");
		length++;
		h = h->next;
	}
	return (length);
}
