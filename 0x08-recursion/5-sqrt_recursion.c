#include "main.h"
/**
 * _sqrt_recursion - to calculate the natural square root of a number
 *
 * @n: int value
 * @y: result
 *
 * Return: the natural squqre root
 */
int sq(int n, int y);
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}
/**
 * sq - to get the square roots
 *
 * @n: int to be passed
 * @y: the result
 *
 * Return: the calculated value
 */
int sq(int n, int y)
{
	if (y * y == n)
		return (y);
	if (y * y < n)
		return (sq(n, y + 1));
	else
		return (-1);
}
