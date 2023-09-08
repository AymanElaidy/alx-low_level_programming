#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %Ls \n", sizeof(char));
	printf("Size of an int: %Ls \n", sizeof(int));
	printf("Size of a long int: %Ls \n", sizeof(long int));
	printf("Size of a long long int: %Ls \n", sizeof(long long int));
	printf("Size of a float: %Ls \n", sizeof(float));
	return (0);
}
