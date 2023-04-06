#include "main.h"
/**
 * is_prime_number - to check if the passed num is prime?
 *
 * @n: the value to be passed
 * @mov: for movement
 *
 * Return: (1) if yes (0) if no
 */
int prime(int n, int mov);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - check for being a or not
 *
 * @n: number to be passed
 * @mov: to move from n to 1
 *
 * Return: (1) for prime (0) for non prime
 */
int prime(int n, int mov)
{
	if (mov == 1)
		return (1);
	if (n % mov == 0 && mov > 0)
		return (0);
	return (prime(n, mov - 1));
}
