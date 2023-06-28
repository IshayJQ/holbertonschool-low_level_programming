#include "main.h"
/**
 * print_line - prints 10 times the numbers, from 0 to 14
 * @n: is the number of times the character _ should be printed
 * Return: not return
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1 ; a <= n ; a++)
		{
			_putchar(95);
			_putchar('\n');
		}
	}
}
