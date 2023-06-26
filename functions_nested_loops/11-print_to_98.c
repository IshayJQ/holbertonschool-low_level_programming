#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer input to get to 98
 * Return:
 */

void print_to_98(int n)
{
	int a, tem;

	if (n <= 98)
	{
		for (tem = n ; tem <= 98 ; tem++)
			_putchar(temp + 48);
			_putchar(44);
			_putchar(32);
	}
	else
	{
		for (tem = n ; tem >= 98 ; tem--)
			_putchar(tem + 48);
			_putchar(44);
			_putchar(32);
	}
}
