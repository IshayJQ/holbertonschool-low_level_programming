#include "main.h"
/**
 * _puts - prints a string
 * @str: string pointer to char
 * Return: not return
 */

void _puts(char *str)
{
	int box;

	for (box = 0 ; str[box] != '\n' ; box++)
		_putchar(str[box]);
	_putchar('\n');
}
