#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - to print the sum of the two square matrix diagonals
 *
 * @a: the square matrix to be passed
 * @size: the matrix size
 */
void print_diagsums(int *a, int size)
{
	int r, sum_diagonal1 = 0, sum_diagonal2 = 0;

	for (r = 0 ; r < size ; r++)
	{
		sum_diagonal1 += a[(size + 1) * r];
		sum_diagonal2 += a[(size - 1) * (r + 1)];
	}
	printf("%d, %d\n", sum_diagonal1, sum_diagonal2);
}
