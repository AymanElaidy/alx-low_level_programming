#include "main.h"

/**
 * _abs - to get the absolute
 *
 * @x: to be checked
 *
 * Return: a for possitive or -a for negative
 */
int _abs(int x)
{
	if (x < 0)
		return (-x);
	else if (x >= 0)
		return (x);
	return (0);
}
