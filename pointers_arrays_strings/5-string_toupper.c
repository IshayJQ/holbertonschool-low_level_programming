#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @p: pointer to character
 * Return: letters uppercase
 */

char *string_toupper(char *p)
{
	char change;
	char *start = p;

	while (*p != '\0')
	{
		if (*p <= 122 && *p >= 97)
		{
			change = *p - 97;
			*p = 65 + change;
		}
		p++;
		}
	p = start;
	return (p);
}
