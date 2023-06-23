#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet, in lowercase ten times
 *
 * Return: 0 on successful execution
 */
void print_alphabet_x10(void)
{
	char ch;
	int t = 1;

	while (t <= 10)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		t++;
		_putchar('\n');
	}
}
