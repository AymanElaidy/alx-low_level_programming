#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n == 57)
			break;
		putchar(',');
		n++;
	}
	putchar('\n');

	return (0);
}
