#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint -  sum of the n number in each node
 * @head: addres pointer to the head list struct list_t
 * Return: the sum of all the data n in each node list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *listNode = head;
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (listNode != NULL)
		{
			sum = listNode->n + sum;
			listNode = listNode->next;
		}
		return (sum);
	}
	else
		return (0);
}
