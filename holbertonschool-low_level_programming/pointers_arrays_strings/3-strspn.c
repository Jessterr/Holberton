#include "main.h"
/**
 * _strspn - gets length of substring
 * @s: input string
 * @accept: number of bytes
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int substring_length = 0;
	int accept_index;

	while (*s)
	{
		for (accept_index = 0; accept[accept_index]; accept_index++)
		{
			if (*s == accept[accept_index])
			{
				substring_length++;
				break;
			}
			else if (accept[accept_index + 1] == '\0')
				return (substring_length);
		}
		s++;
	}
	return (substring_length);
}
