#include "main.h"

/**
 * reverse_array - reverses the content of an array of integer
 * @a: pointer to integer
 * @n: number of elements of the array
 * Return: not return
 */

void reverse_array(int *a, int n)
{
	int mitad;
	int cont = 1;
	int *final = a;
	int temp1, temp2;

	for (mitad = 1 ; mitad < n ; mitad++)
		final++;
	mitad = n / 2;
	while (cont <= mitad)
	{
		temp1 = *a;
		temp2 = *final;
		*a = temp2;
		*final = temp1;
		a++;
		final--;
		cont++;
	}
}
