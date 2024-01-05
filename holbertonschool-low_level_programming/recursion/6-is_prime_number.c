#include "main.h"

/**
 * is_prime_helper - Helper function to check if n is prime recursively
 * @n: Input number to check for primality
 * @i: Current divisor to check
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number - Determines if n is or is not a prime number
 * @n: Input
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
