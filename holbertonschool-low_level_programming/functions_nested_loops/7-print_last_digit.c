#include "main.h"

/**
 * print_last_digit - prints the last digit of a number string
 * last: the last digit
 * last_abs: the absolute value of variable last
 * @n: the integer to print the last digit from
 * Return: The last digit, removing the - if negative number
 */
int print_last_digit(int n)
{
	int last = n % 10;
	int last_abs = (last < 0) ? -last : last;

	_putchar(last_abs + '0');

	return (last_abs);
}
