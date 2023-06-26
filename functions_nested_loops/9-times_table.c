#include "main.h"
/**
 * times_table - multiplication tables up to 9
 *
 * Return: no return
 */

void times_table(void)
{
	char a, b, result;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			result = a * b;
			_putchar(result);
			_putchar(39);
			_putchar(32);
		}
		_putchar('\n');
	}
}
