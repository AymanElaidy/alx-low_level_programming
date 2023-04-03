#include "main.h"
/**
 * _strpbrk - to searche a string for any of a set of bytes
 *
 * @s: string to be passed
 * @accept: to be searched for
 *
 * Return: pointer to the byte in s that matches the byte in substring
 */
char *_strpbrk(char *s, char *accept)
{
	int s_pos, acc_pos;
	char *pos;

	for (s_pos = 0 ; s[s_pos != '\0'] ; s_pos++)
	{
		for (acc_pos = 0 ; accept[acc_pos] != '\0' ; acc_pos++)
		{
			if (accept[acc_pos] == s[s_pos])
			{
				pos = &s[s_pos];
				return (pos);
			}
		}
	}
	return (0);
}
