#include "main.h"
/**
 * _powerof - calculates 1st input number to the power of 2nd
 * @first: first number
 * @second: second number
 * Return: value of (base ^ power)
 */
unsigned long int _powerof(unsigned int first, unsigned int second)
{
	unsigned long int result;
	unsigned int i;

	result = 1;
	i = 1;

	for (; i <= second; i++)
		result *= first;
	return (result);
}
