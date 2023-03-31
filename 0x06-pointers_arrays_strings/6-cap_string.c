#include "main.h"
/**
 * cap_string - to replace the 1st lower letters in the words with upper ones
 *
 * @s: pointer to the array
 *
 * Return: string s
 *
 **/
char *cap_string(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (i == 0)
				s[i] = s[i] - 32;
			if (s[i] == ' ' ||
					s[i] == '\t' ||
					s[i] == '\n' ||
					s[i] == ',' ||
					s[i] == ';' ||
					s[i] == '.' ||
					s[i] == '!' ||
					s[i] == '?' ||
					s[i] == '"' ||
					s[i] == '(' ||
					s[i] == ')' ||
					s[i] == '{' ||
					s[i] == '}')
				s[i + 1] = s[i + 1] - 32;
	}
	}
	return (s);
}

