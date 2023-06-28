#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: is the number of times the character \ should be printed
 * Return: not return
 */

void print_diagonal(int n)
{
	int a, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0 ; a < n ; a++)
		{
			space = a - 1;
			if (space >= 0)
			{
				while (space < a)
				{
					_putchar(32);
					space++;
				}
			}
			_putchar(92);
		}
		_putchar('\n');
	}
}
