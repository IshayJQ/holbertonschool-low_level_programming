#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: pointer to character
 * Return: pointer to char whit change
 */

char *leet(char *str)
{
	char *p = str;
	char reference[] = {'A', 'E', 'O', 'T', 'L'};
	int change[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*str != '\0')
	{
		for (i = 0; i < sizeof(reference) / sizeof(char); i++)
		{
			if (*str == reference[i] || *str == reference[i] + 32)
				*str = 48 + change[i];
		}
		str++;
	}
	return (p);
}
