#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value, destination
 * @src: input value, source
 * @n: input value, bytes to be used from string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int char_counter;

	char_counter = 0;
	while (char_counter < n && src[char_counter] != '\0')
	{
		dest[char_counter] = src[char_counter];
		char_counter++;
	}
	while (char_counter < n)
	{
		dest[char_counter] = '\0';
		char_counter++;
	}

	return (dest);
}
