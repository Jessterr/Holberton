#include "main.h"

/**
 * _sqrt_recursion - finds the square root of n
 * @n: input
 *
 * Return: returns the square root, 0, 1 or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0 || n != (int)n)
	{
		return (-1);
	}
	return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - Recursively finds the square root of n using a binary search.
 * @n: The number for which to find the square root.
 * @min: The lower bound of the search range.
 * @max: The upper bound of the search range.
 *
 * Return: The square root of n, or -1 if n is not a perfect square.
 */
int sqrt_helper(int n, int min, int max)
{
	int guess;

	if (min > max)
	{
		return (-1);
	}

	guess = (min + max) / 2;

	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess < n)
	{
		return (sqrt_helper(n, guess + 1, max));
	}
	else
	{
		return (sqrt_helper(n, min, guess - 1));
	}
}
