#include "main.h"

/**
 * jack_bauer - print every minute in the day
 *
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			printf("%d", i * j);
		}
	}
	_putchar('\n');
}
