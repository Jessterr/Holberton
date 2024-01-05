#include "main.h"

/**
 * print_square - prints a square
 * @size: square size
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int s, d;

		for (s = 0; s < size; s++)
		{
			for (d = 0; d < size; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
