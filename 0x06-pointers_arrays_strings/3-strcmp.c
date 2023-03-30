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
	int size = 0, value = 0;

	while (s1[size] != '\0')
	{
		if (s2[size] > s1[size])
		{
			value = -15;
			break;
		}
		else if (s2[size] < s1[size])
		{
			value = 15;
			break;
		}
		else
			value = 0;
	size++;
	}
	return (value);
}

