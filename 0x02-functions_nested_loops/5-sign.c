#include "main.h"

/**
 * print_sign - to check for lowercase character
 *
 * @n: to be checked
 *
 * Return: (1) if positive (0) if zero else (-1) for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
