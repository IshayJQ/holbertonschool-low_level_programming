#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to character
 * Return: integer value
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 45)
		{
			sign = -1;
			i++;
		}
		else if (str[i] == 43)
			i++;
		else if (str[i] == 32)
			i++;
		else if (str[i] >= 48 && str[i] <= 57)
		{
			result = result * 10 + (str[i] - 48);
			i++;
		}
		else
			i++;
	}
	if (result == 0)
		return (result);
	else
		return (result * sign);
}
