#include "main.h"

/**
 * print_alphabet - to print the alphabet
 *
 */
void print_alphabet(void)
{
	int i, j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 97 ; i <= 122 ; i++)
			_putchar(i);
		_putchar('\n');
	}
	_putchar('\n');
}
