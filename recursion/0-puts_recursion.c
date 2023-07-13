#include "main.h"

/**
 * _puts_recursion - memory with a constant byte
 * @s: prints a string
 * Return: not return
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
