#include "main.h"
/**
 * swap_int - prints a trianle
 * @a: pointer to integer
 * @b: pointer to integer
 * Return: not return
 */

void swap_int(int *a, int *b)
{
	int swap;
	
	swap = *a;
	*a = *b;
	*b = swap;
	

}
