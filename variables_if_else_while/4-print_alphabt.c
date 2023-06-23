#include <stdio.h>

/**
 * main - Entry point of the program alphabet in lowercase except q and e
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	printf("\n");
	return (0);
}
