#include "main.h"
/**
 * _memset - fill a section of memory with a constant value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to change
  * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int index = 0;

	for (; n > 0; index++)
	{
		s[index] = b;
		n--;
	}
	return (s);
}
