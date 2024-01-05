#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: input, searches this
 * @needle: input, to find this
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *current_haystack = haystack;
		char *current_needle = needle;

		while (*current_needle != '\0' && *current_haystack == *current_needle)
		{
			current_haystack++;
			current_needle++;
		}

		if (*current_needle == '\0')
			return (haystack);

		haystack++;
		}

	return (0);
}
