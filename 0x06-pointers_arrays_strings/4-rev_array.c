#include "main.h"
/**
 * reverse_array - to revers a sn array of integers
 *
 * @a: pointer to the array
 * @n: array size
 **/
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n / 2 ; i++)
	{
		a[i] = a[n - i + 1];
	}
}

