#include "main.h"
/**
 * _strspn - to get the length of a prefix substring
 *
 * @s: the string to be passed
 * @accept: sub string
 *
 * Return: number of bytes in the initial segment matches substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_pos, acc_pos;

	s_pos = 0;
	while (s[s_pos] != '\0')
	{
		for (acc_pos = 0 ; s[s_pos] != accept[acc_pos] ; acc_pos++)
		{
			if (accept[acc_pos] == '\0')
				return (s_pos);
		}
		s_pos++;
	}
	return (s_pos);
}
