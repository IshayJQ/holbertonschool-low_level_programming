#include "main.h"
/**
 * times_table - multiplication tables up to 9
 *
 * Return: no return
 */

void times_table(void)
{
	char a, b, result, u, d;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			result = a * b;
			if (resul > 9)
			{
				u = result % 10;
				d = (result - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + 48);
				_putchar(u + 48);
			}
			else if (b != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(result + 48);
			}
		}
		_putchar('\n');
	}
}
