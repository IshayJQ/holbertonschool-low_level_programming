#include "main.h"

/**
 * _pow_recursion - value of x raised to the power of y
 * @x: numer raised to the power of y
 * @y:
 * Return: the result of the raised number
 */

int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * factorial(x, y - 1));
}
