#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to character
 * @src: pointer to character
 * Return:  a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	dest = p;
	return (dest);
}
