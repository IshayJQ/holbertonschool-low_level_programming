#include "main.h"
/**
 * print_sign- checks for lowercase character
 * @n: is the number character to check
 * Return: 1 is greater than zero or 0 is zero or -1 is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
