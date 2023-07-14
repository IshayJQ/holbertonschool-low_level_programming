#include "main.h"

/**
 * _memcpy -  copies memory area
 * @dest: pointer to character
 * @src: pointer to character
 * @n: bytes from memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int box, temp;

	temp = n;

	for (box = 0 ; box < temp ; box++)
	{
		dest[box] = src[box];
		n--;
	}
	return (dest);
}
