#include "main.h"
/**
 * print_triangle - prints a trianle
 * @size:  is the size of the triangle
 * Return: not return
 */

void print_triangle(int size)
{
	int brick, space, piso;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (piso = 1 ; piso <= size ; piso++)
		{
			brick = piso;
			space = size - piso;
			while (space > 0)
			{
				putchar(32);
				space--;
			}
			if (space == 0)
			{
				while (brick > 0)
				{
					putchar(35);
					brick--;
				}
			}
			putchar('\n');
		}
	}
}
