#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @x: number as integer
 * Return: the last digit
 */

int print_last_digit(int x)
{
	int m;

	m = x % 10;
	if (m < 0)
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}
