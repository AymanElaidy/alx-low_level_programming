#include "main.h"
/**
 * _strlen_recursion - to calculate the length of a string
 *
 * @s: string to be passed
 *
 * Return: the calculaaated length
 */
int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s == '\0')
		return (0);
	counter++;
	counter += _strlen_recursion(s + 1);
	return (counter);
}
