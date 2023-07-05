#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string pointer to char
 * Return: not return
 */
void puts2(char *str)
{
	int cont;

	for (cont = 0 ; str[cont] != '\0' ; cont = cont + 2)
		if (str[cont] == '\0')
			break;
		_putchar(str[cont]);
	_putchar('\n');
}
