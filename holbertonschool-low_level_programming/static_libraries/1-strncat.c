#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input value, destination
 * @src: input value, source
 * @n: input value, bytes to be used from string
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int destination;
	int source;

	destination = 0;
	while (dest[destination] != '\0')
	{
		destination++;
	}
	source = 0;
	while (source < n && src[source] != '\0')
	{
		dest[destination] = src[source];
		destination++;
		source++;
	}
	dest[destination] = '\0';
	return (dest);
}
