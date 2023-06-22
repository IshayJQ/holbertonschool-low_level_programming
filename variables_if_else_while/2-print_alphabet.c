#include <stdio.h>

/**
 * main - Entry point of the program using puts
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	printf("\n");
	return (0);
}
