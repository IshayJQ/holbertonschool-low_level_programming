#include <stdio.h>

/**
 * main - Entry point of the program numbers of base 16 in lowercase
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	char x, y;

	for (x = 48 ; x <= 57 ; x++)
		putchar(x);
	for (y = 97 ; y <= 102 ; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
