#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a:string pointer to integer
 * @n: lenght of the array
 * Return: not return
 */

void print_array(int *a, int n)
{
	int cont = 1;

	while (cont <= n)
	{
		if (cont == 0)
			printf("%d", *a);
		else
		if (cont != n)
		a++;
		cont++;
	}
	printf("\n");
}
