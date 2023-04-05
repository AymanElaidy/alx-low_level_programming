#include "main.h"
/**
 * _pow_recursion - to get x^y
 *
 * @x: base number
 * @y: power (times) number
 *
 * Return: x^y if y>0
 */
int _pow_recursion(int x, int y)
{
	int temp = x;
	
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
	{
		temp = x * _pow_recursion(x, y - 1);
	}
	return (temp);
}
