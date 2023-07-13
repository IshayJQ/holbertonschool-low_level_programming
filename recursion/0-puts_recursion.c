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
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
