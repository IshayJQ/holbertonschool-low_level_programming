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
	_putchar(m);
	return (m);
}
