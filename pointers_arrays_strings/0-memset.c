#include "main.h"

/**
 * _memset - memory with a constant byte
 * @s: pointer to character
 * @b: with the constant byte
 * @n: bytes of the memory area pointed to by
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
