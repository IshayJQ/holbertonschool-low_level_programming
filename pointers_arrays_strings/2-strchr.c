#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: pointer to character
 * @c: character to the string
 * Return: pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int box;

	for (box = 0 ; s[box] >= '\0' ; box++)
	{
		if (s[box] == c)
			return (&s[box]);
	}
	return (0);
}
