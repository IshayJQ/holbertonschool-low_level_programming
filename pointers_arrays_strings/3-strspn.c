#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 * @s: number of bytes in the initial segment
 * @accept: consist only of bytes from
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont;
	int box;

	cont = 0;

	while (*s != '\0')
	{
		for (box = 0; accept[box]; box)
		{
			if (*s == accept[box])
			{
				cont++;
				break;
			}
			else if (accept[box + 1] == '\0')
				return (cont);
		}
		s++;
	}
	return (cont);
}
