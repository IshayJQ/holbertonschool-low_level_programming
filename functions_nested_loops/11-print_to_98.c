#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer input to get to 98
 * Return:
 */

void print_to_98(int n)
{
	int tem;

	if (n <= 98)
	{
		for (tem = n ; tem <= 98 ; tem++)
		{
			if (tem == 98)
			{
				printf("%d ", tem);
				printf("\n");
			}
			else
				printf("%d, ", tem);
		}
	}
	else
	{
		for (tem = n ; tem >= 98 ; tem--)
		{
			if (tem == 98)
			{
				printf("%d ", tem);
				printf("\n");
			}
			else
				printf("%d, ", tem);
		}
	}
}
