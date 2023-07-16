#include "main.h"
#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always mean success
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d", argc - 1);
	return (0);
}
