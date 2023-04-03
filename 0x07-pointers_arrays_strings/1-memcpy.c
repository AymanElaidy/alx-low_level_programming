#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: 1st array to be passed
 * @src: 2nd one
 * @n: the required size
 *
 * Return: pointer to the resulted array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int pos;

	while (n)
	{
		dest[pos] = src[pos];
		n--;
	}
	return (s);
}
