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
	int diag1, diag2, cont, jumps;

	diag1 = *a;
	diag2 = 0;

	for (cont = 0 ; cont < size-1 ; cont++)
	{
		jumps = 1;
		while (jumps <= size+1)
		{
			a++;
			jumps++;
		}
		diag1 = diag1 + *a;
	}
	for (cont = 0 ; cont < size ; cont++)
	{
		jumps = 1;
		while (jumps <= size-1)
		{
			a--;
			jumps++;
		}
		diag2 = diag2 + *a;
	}
	printf("%d, %d\n", diag1, diag2);
}
