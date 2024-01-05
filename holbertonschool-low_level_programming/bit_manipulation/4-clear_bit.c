#include "main.h"
/**
 * clear_bit - sets value of bit at index to 0
 * @n: number
 * @index: index
 * Return: 1 if success, -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

