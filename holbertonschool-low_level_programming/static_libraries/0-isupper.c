#include "main.h"

/**
 * _isupper - checks if uppercase
 * @ch: the character to be checked
 * Return: 1 if char is lowercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
