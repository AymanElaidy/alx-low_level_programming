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
	int pos1, pos2 = 0;

	for (pos1 = 0 ; haystack[pos1] != '\0' ; pos1++)
	{
		while (needle[pos2] != '\0')
		{
			/*if (haystack[pos1 + pos2] != needle[pos2])
				break;*/
			pos2++;
		}
		if (needle[pos2] == '\0')
			return (haystack + pos1);
	}
	return (NULL);
}
