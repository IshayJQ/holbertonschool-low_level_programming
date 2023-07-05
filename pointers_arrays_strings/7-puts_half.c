#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string pointer to char
 * Return: not return
 */

void puts_half(char *str)
{
	int length, n, cont;

	for (length = 1 ; *str != '\0' ; str++)
		length++;
	n = (length - 1) / 2;
	for (cont = 1 ; cont <= n ; cont++)
		str--;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	
	_putchar('\n');
}
