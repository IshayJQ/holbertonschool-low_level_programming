#include "main.h"
/**
 * print_square - prints a square
 * @size:  is the size of the square
 * Return: not return
 */

void print_square(int size)
{
	int ancho, altura;

	for (altura = 1 ; altura <= size ; altura++)
	{
		for (ancho = 1 ; ancho <= size ; ancho++)
			_putchar(35);
		_putchar('\n');
	}
}
