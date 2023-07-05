#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string pointer to char
 * Return: not return
 */

void rev_string(char *s)
{
	int length, mitad;
	int cont = 1;
	char *final = s;
	char temp1, temp2;

	for (length = 1 ; *final != '\0' ; final++)
		length++;
	mitad = length / 2;
	final--;
	while (cont <= mitad - 1)
	{
		temp1 = *s;
		temp2 = *final;
		*s = temp2;
		*final = temp1;
		s++;
		final--;
		cont++;
	}
}
