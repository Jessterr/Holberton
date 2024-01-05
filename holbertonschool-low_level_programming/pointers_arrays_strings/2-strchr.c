#include "main.h"
/**
 * _strchr - Entry point
 * @s: string searched
 * @c: character searched for
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int current_position = 0;

	for (; s[current_position] >= '\0'; current_position++)
	{
		if (s[current_position] == c)
			return (&s[current_position]);
	}
	return (0);
}
