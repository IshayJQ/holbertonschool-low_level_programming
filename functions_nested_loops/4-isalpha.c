#include "main.h"
/**
 * _isalpha - checks for checks for alphabetic character
 * @c: is the number character to check
 * Return: 1 if is lowercase or 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
