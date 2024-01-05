#include "main.h"

/**
 * _isdigit- checks if ch is numeric
 * @c: the character to be checked
 * Return: 1 if c is a number, otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
