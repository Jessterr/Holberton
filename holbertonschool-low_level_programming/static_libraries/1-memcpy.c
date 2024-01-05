#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: destination where memory is stored
 *@src: source where memory is copied from
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int current_position = 0;
	int remaining_bytes = n;

	for (; current_position < remaining_bytes; current_position++)
	{
		dest[current_position] = src[current_position];
		n--;
	}
	return (dest);
}
