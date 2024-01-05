#include "main.h"

/**
 * set_bit - set value of bit to 1 at index position
 * @n: number to set
 * @index: position
 * Return: 1 if success, or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	tmp = 1 << index;
	*n = *n | tmp;
	return (1);
}

