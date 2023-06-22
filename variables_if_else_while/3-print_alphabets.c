#include <stdio.h>

/**
 * main - Entry point of the program alphabet in lowercase and uppercase
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
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	printf("\n");
	return (0);
}
