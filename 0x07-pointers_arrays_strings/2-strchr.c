#include "main.h"
/**
 * _strchr -  locates a character in a string
 *
 * @s: string to be passed
 * @c: character to search for
 *
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int pos;

	pos = 0;
	while (s[pos] != '\0')
	{
		if (c == s[pos])
			return (&s[0] + pos);
		pos++;
	}
	return ('\0');
}
