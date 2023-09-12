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

	l_d = x % 10;
	if (l_d < 0)
		l_d *= -1;
	_putchar(l_d + '0');
	return (l_d);
}
