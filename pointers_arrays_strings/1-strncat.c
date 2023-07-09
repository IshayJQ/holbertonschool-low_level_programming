#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to character
 * @src: pointer to character
 * @n: bytes from src
 * Return:  a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int cont = 1;

	if (*dest != '\0')
	{
		while (*dest != '\0')
			dest++;
		while (cont <= n)
		{
			*dest = *src;
			dest++;
			src++;
			cont++;
		}
		dest = p;
	}
	return (dest);
}

