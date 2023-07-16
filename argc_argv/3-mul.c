#include "main.h"
#include <stdio.h>

/**
 * main -  multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always mean success 1 if not receive two arguments
 */

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mul = mul * _atoi(argv[i]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
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
