#include "main.h"

/**
 * cap_string - capitalizes all words
 * @p: pointer to character
 * Return: pointer p to character
 */

char *cap_string(char *p)
{
	char *start, change;

	start = p;

	while (*p != '\0')
	{
		if (*p == 32 || *p == '\n' || *p == '\t')
		{
			p++;
			if (*p <= 122 && *p >= 97)
			{
				change = *p - 97;
				*p = 65 + change;
			}
		}
		if (*p != '\0')
			p++;
	}
	p = start;
	return (p);
}
