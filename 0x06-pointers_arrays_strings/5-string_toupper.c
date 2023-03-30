#include "main.h"
/**
 * reverse_array - to revers a sn array of integers
 *
 * @a: pointer to the array
 * @n: array size
 **/
char *string_toupper(char *s)
{
	int i,

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] += 32;
	}
	return (s);
}

