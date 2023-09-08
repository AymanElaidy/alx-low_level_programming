#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 57;

	while (n >= 48)
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
