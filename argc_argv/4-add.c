#include "main.h"
#include <stdio.h>

/**
 * main -  adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 success print 0 If no number is passed and 1 if contains symbols
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isdigit(argv[i]) == 1)
				sum = sum + _atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}

/**
 * _isdigit - checks for a digit
 * @c: is the value to check
 * Return: 1 if is a digit or 0 if otherwise
 */

int _isdigit(char *c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

/**
 * _atoi - convert a string to an integer
 * @s: pointer to character
 * Return: integer value
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = -1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			sign = sign * -1;
			i++;
		}
		else if (s[i] == 43)
			i++;
		else if (s[i] == 32)
			i++;
		else if (s[i] >= 48 && s[i] <= 57)
		{
			result = result * 10 - (s[i] - 48);
			i++;
		}
		else
			i++;
		if (i == 36)
			break;
	}
	if (result == 0)
		return (result);
	else
		return (result * sign);
}
