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
			if (j == 0)
				printf("%d, ", i * j);
			else
			{
				printf("%2d", i * j)
					if (j != 9)
						printf(", ");
			}
		}
		_putchar('\n');
	}
}
