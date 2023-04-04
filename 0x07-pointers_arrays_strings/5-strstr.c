#include "main.h"
/**
 * _strstr - to locate a substring
 *
 * @haystack: string to be passed
 * @needle: string to search for
 *
 * Return:  pointer to the 1st occurence of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int pos1, pos2;

	for (pos1 = 0 ; haystack[pos1] != '\0' ; pos1++)
	{
		for (pos2 = 0 ; needle[pos2] == haystack[pos1] && needle[pos2] != '\0' ; pos2++)
		{
			if (needle[pos2] == '\0')
				return (haystack);
		}
	}
	return (NULL);
}
