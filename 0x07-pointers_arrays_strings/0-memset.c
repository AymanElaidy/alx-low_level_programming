#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: the string to be passed
 * @b: the character to be added
 * @n: size to be replaced
 *
 * Return: a pointer to resulted string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int pos;

	pos = 0;
	while (n)
	{
		s[pos] = b;
		n--;
		pos++;
	}
}
