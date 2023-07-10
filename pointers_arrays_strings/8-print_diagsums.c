#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to integer
 * @size: size
 * Return: not return
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, cont;

	sum1 = 0;
	sum1 = 0;

	for (cont = 0 ; cont < size ; cont++)
		sum1 = sum1 + a[cont * size + cont];
	for (cont = size - 1 ; cont >= 0 ; cont--)
		sum2 = sum2 + a[cont * size + (size - cont - 1)];
	printf("%d, %d\n", sum1, sum2);
}
