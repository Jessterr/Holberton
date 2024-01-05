#include "main.h"
/**
 * _powerof - calculates 1st input number to the power of 2nd
 * @first: first number
 * @second: second number
 * Return: result
 */
unsigned long int _powerof(unsigned int first, unsigned int second)
{
	unsigned long int result;
	unsigned int i;

	result = 1, i = 1;
	for (; i <= second; i++)
		result *= first;
	return (result);
}
/**
 * print_binary - prints number in binary
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit_position, bitwise_result;
	char flag;

	flag = 0;
	bit_position = _powerof(2, sizeof(unsigned long int) * 8 - 1);
	while (bit_position != 0)
	{
		bitwise_result = n & bit_position;
		if (bitwise_result == bit_position)
		{
			flag = 1;
			_putchar('1');
		}	else if (flag == 1 || bit_position == 1)
			_putchar('0');
		bit_position >>= 1;
	}
}
