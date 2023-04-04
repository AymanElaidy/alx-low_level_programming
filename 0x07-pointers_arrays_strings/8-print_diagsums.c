#include "main.h"
/**
 * print_diagsums - to print the sum of the two square matrix diagonals
 *
 * @a: the square matrix to be passed
 * @size: the matrix size
 */
void print_diagsums(int *a, int size)
{
	int r, c, sum_diagonal = 0;

	for (r = 0 ; r < size ; r++)
	{
		for (c = 0 ; c < size ; c++)
		{
			if ((r == c) || (c == size - r))
				sum_diagonal += a[r][c];
		}
	}
	_putchar(sum_diagonal + '0');
}
