#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: string 1, input value
 * @s2: string 2, input value
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int position;

	position = 0;
	while (s1[position] != '\0' && s2[position] != '\0')
	{
		if (s1[position] != s2[position])
		{
			return (s1[position] - s2[position]);
		}
		position++;
	}
	return (0);
}
