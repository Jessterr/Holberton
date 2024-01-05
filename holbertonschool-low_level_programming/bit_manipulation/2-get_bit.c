#include"main.h"
/**
 * get_bit - returns value of bit at given index
 * @n: number to check
 * @index: which index
 * Return: value of bit, or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int left_shift, check_1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	left_shift = 1 << index;
	check_1 = n & left_shift;
	if (check_1 == left_shift)
		return (1);
	return (0);
}

