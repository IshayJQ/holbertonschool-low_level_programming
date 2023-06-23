#include "main.h"
/**
 * main - Entry point of the program prints the alphabet, in lowercase
 *
 * Return: 0 on successful execution
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	printf("\n");
	return (0);
}

