#include "main.h"
/**
 * _abs - absolute value of an integer
 * @x: number whit sign negative
 * Return: the absolute value
 */

int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}
