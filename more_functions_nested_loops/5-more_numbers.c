#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: no return
 */

void more_numbers(void)
{
	int cont, num, p;

	for (cont = 1 ; cont <= 10 ; cont++ )
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			p = num + '0';
			_putchar(p);
		}
		_putchar('\n');
	}  
}
