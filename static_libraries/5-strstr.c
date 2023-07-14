#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to character
 * @needle: pointer to character
 * Return:  a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);

}
