#include "main.h"

/**
 * is_prime_number - integer is a prime number
 * @n: given number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - check the number
 * @n: given number
 * @num: temporal number to get the answer
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int _prime(int n, int num)
{
	if (num >= n && n > 1)
		return (1);
	else if (n % num == 0 || n <= 1)
		return (0);
	else
		return (_prime(n, num + 1));
}
