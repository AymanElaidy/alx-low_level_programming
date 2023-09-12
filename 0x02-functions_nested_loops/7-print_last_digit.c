#include "main.h"

/**
 * print_last_digit - to print the last digit on a number
 *
 * @x: parameter
 *
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int l_d;

	l_s = x % 10;
	if (l_s < 0)
		l_s *= -1;
	_putchr(l_s + '0');
	return (l_s);
}
