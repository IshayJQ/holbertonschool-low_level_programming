#include "main.h"
#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always mean success
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%d", argc);
	return (0);
}
