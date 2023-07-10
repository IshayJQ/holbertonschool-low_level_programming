#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to character
 * @s2: pointer to character
 * Return: if the character are differents return the subtraction number ASCII
 */
int _strcmp(char *s1, char *s2)
{
	while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0')
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
