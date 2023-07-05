#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string pointer to char
 * Return: not return
 */

void rev_string(char *s)
{
	int length, box;

	for (length = 1 ; *s != '\0' ; s++)
		length++;

	char temp[length];

	s--;

	for (box = 0 ; box < length - 1 ; box++)
	{
		temp[box] = *s;
		/*printf("%c", temp[box]);*/
		s--;
	}
	s++;
	if (box == length - 1)
		temp[box] = '\0';
	/*printf("\n");*/
	/*printf("%s", temp);*/
	for (box = 0 ; *s != '\0' ; box++)
	{
		*s = temp[box];
		s++;
	}
	_putchar('\n');
}
