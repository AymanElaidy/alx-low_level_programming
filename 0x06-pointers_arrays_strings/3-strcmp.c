#include "main.h"
/**
 * _strcmp - to compare strings
 *
 * @s1: 1st string
 * @s2: 2nd one
 *
 * Return: (0) if s2 == s1 , (15) s1> s2 , (-15) if s2>s1
 **/
int _strcmp(char *s1, char *s2)
{
	int value = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s2 > *s1)
		{
			value = -15;
			break;
		}
		else if (*s2 < *s1)
		{
			value = 15;
			break;
		}
		else
			value = 0;
	s1++;
	s2++;
	}
	return (value);
}

