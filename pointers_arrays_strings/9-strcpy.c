#include "main.h"

/**
 * *_strcpy - prints every other character of a string
 * @src: pointer to a string
 * @dest: pointer to a string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (dest);
}
