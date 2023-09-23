#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>

typedef struct listint_s
{
    int n;               /* Integer stored at the node. */
    size_t index;        /* Index of the node in the list. */
    struct listint_s *next; /* Pointer to the next node. */
} listint_t;

typedef struct skiplist_s
{
    int n;               /* Integer stored at the node. */
    size_t index;        /* Index of the node in the list. */
    struct skiplist_s *next;    /* Pointer to the next node. */
    struct skiplist_s *express; /* Pointer to the next node in the express lane. */
} skiplist_t;

int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t r);
int binary_search(int *array, size_t size, int value);

#endif
