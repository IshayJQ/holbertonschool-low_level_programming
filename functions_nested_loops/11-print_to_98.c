#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer input to get to 98
 * Return:
 */

void print_to_98(int n)
{
	int a, temp;

	if (n <= 98)
	{
		for (temp = n ; temp <= 98; temp++)
			_putchar(temp + 48);
			_putchat(44);
			_putchar(32);
	}
	else
	{
		for (temp = n ; temp >= 98 ; temp--)
			_putchar(temp + 48);
			_putchat(44);
			_putchar(32);
	}
}
