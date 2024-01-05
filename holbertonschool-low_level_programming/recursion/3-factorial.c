#include "main.h"

/**
 * factorial - returns factorial of input number
 * @n: input
 * Return: The factorial of 'n' or -1 if 'n' is negative
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
