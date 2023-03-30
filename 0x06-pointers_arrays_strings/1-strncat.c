#include "main.h"
/**
 * _strcat - to concatenate two strings
 *
 * @dest: 1st string
 * @src: 2nd one
 *
 * Return: a string
 **/
char *_strncat(char *dest, char *src, int n)
{
	int size1 = 0, size2 = 0;

	while (dest[size1])
		size1++;
	for (size2 = 0 ; size2 < n && src[size2] != '\0'; size2++)
	{
		dest[size1 + size2] = src[size2];
	}
	dest[size1 + size2 + 1] = '\0';
	return (dest);
}

