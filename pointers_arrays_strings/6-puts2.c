#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string pointer to char
 * Return: not return
 */
void puts2(char *str)
{
	int cont = 0;

	while (*str != '\0')
	{
		if (cont % 2 == 0)
			_putchar(*str);
		str++;
		cont++;
	}
	_putchar('\n');
}
