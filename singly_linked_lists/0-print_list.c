#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list -  print the string of each node
 * @h: pointer to struct list_t const
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t length = 0;
	unsigned int i;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] ", h->len);
			for (i = 0; i < h->len; i++)
				printf("%c", h->str[i]);
		}
		else
			printf("[%d] (nil)", 0);
		printf("\n");
		h = h->next;
		length++;
	}
	return (length);
}
