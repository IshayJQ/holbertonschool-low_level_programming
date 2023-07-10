#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to character
 * @s2: pointer to character
 * Return: if the character are differents return the subtraction number ASCII
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return *s1 - *s2;
}
