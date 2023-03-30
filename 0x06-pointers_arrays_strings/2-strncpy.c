#include "main.h"
/**
 * _strncat - to concatenate two strings
 *
 * @dest: 1st string
 * @src: 2nd one
 * @n: no of elements in src to stop at it
 * Return: a string
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int size = 0;

	for (size = 0 ; size < n && src[size] != '\0'; size++)
	{
		dest[size] = src[size];
	}
	while (size <n)
	{
		dest[size] = '\0';
		size++;
	}
	return (dest);
}

