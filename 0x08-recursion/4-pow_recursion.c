#include "main.h"
/**
 * _pow_recursion
 *
 * @x: base number
 * @y: power (times) number
 *
 * Return: x^y if y>0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		x = x * x;
		y--;
		_pow_recursion(y);
	}
	return (x);
}
