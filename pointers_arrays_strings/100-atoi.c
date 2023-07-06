#include "main.h"

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
