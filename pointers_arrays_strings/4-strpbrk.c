#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first occurrence in the string
 * @accept: any of the bytes in the string
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int box;

	while (*s != '\0')
	{
		for (box = 0 ; accept[box]; box++)
		{
			if (*s == accept[box])
				return (s);
		}
		s++;
	}
	return ('\0');
}
