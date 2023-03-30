#include "main.h"
/**
 * string_toupper - to replace lower letters with upper ones
 *
 * @s: pointer to the array
 *
 * Return: string s
 * 
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

