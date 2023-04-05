#include "main.h"
/**
 * factorial - to calculate the factorial value of an integer
 *
 * @n: the integer to be passed
 *
 * Return: the calculated value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
