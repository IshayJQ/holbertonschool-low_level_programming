#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: given number
 * Return:  the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns the natural number
 * @n: given number
 * @num: temporal number to get the answer
 * Return:  the natural square root of a number
 */

int _sqrt(int n, int num)
{
	if (num * num == n)
		return (num);
	else if (num * num < n)
		return (_sqrt(n, num + 1));
	else
		return (-1);
}
