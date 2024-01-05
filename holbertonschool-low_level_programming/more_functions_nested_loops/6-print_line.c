#include "main.h"

/**
 * print_line - prints a straight line
 * @n: the number of times _ is printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
