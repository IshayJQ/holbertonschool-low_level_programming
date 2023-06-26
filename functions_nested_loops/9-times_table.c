#include "main.h"
/**
 * times_table - multiplication tables up to 9
 *
 * Return: no return
 */

void times_table(void)
{
	int a, b, result;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b <= 10 ; b++)
		{
			result = a * b;
			_putchar(result + 48);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
