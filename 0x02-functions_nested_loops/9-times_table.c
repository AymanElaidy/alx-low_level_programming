#include "main.h"

/**
 * times_table - print every minute in the day
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			printf("%d, ", i * j);
		}
	}
	_putchar('\n');
}
