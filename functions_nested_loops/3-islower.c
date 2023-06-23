#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: is the number character to check
 * Return: 1 if is lowercase or 0 if not
 */

int _islower(int c)
{
	int y;

	for (y = 97 ; y <= 122 ; y++)
	{
		if (c == y)
			return (1);
	}
	if (y == 122 && c != y)
		return (0);
	_putchar('\n');
}
