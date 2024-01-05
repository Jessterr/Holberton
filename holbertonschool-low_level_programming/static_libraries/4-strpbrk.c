#include "main.h"
/**
 * _strpbrk - searches string for any of set of bytes
 * @s: input, byte matched to accept
 * @accept: input, bytes to match s to
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int accept_index;

		while (*s)
		{
			for (accept_index = 0; accept[accept_index]; accept_index++)
			{
			if (*s == accept[accept_index])
			return (s);
			}
		s++;
		}

	return ('\0');
}
