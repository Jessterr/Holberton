#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value, destination
 * @src: input value, source
 * *start_dest - copies dest at the starting location
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *start_dest = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return (start_dest);
}
