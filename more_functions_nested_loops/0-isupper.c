#include "main.h"
/**
 *  _isupper- checks for uppercase character
 * @c: is the number character to check
 * Return: 1 if is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
