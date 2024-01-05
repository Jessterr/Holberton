#include "main.h"
/**
 * flip_bits - number of bits to flip to get from one number to another
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int different = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = different >> a;
		if (current & 1)
			count++;
	}	return (count);
}

