#include "main.h"

/**
 * factorial - print the factorial of a number
 * @n: given number
 * Return: the factorial of the given number
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
