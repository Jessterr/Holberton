#include "main.h"

/**
 * _isalpha- checks if alphabetic
 * @ch: the character to be checked
 * Return: 1 if char is alpha, otherwise 0
 */

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
