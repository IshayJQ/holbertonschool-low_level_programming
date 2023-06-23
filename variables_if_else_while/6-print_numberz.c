#include <stdio.h>

/**
 * main - Entry point of the program numbers of base 10 starting whit putchar
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}

