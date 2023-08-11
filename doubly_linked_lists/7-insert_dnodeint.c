#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index -  get node by the index
 * @head: addres pointer to the head list struct list_t
 * @index: the number node
 * Return: the addres of the node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *listNode, *newList, *lastNode;
    unsigned int cont;
    
    listNode = *h;
    newList = malloc(sizeof(dlistint_t));
    
    if (newList == NULL)
    {
        printf("Error\n");
        return (NULL);
    }
    for (cont = 0; cont < idx; cont++)
    {
        if (listNode == NULL)
            return (NULL);
        if (cont == idx-1)
          lastNode = listNode;
        listNode = listNode->next;
    }
    newList->prev = listNode->prev;
    newList->next = listNode;
    newList->n = n;
    listNode->prev = newList;
    lastNode->next = newList;
    return (newList);
}
