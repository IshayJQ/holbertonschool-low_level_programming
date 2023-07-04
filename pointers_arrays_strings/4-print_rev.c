#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string pointer to char
 * Return: not return
 */

void print_rev(char *s)
{
	int length, box;

	for (length = 0 ; s[length] != '\0' ; length++);
	for (box = length - 1 ; box >= 0 ; box--)
		_putchar(s[box]);
	_putchar('\n');
}
