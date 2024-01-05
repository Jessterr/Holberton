#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - combines two strings
 * @s1: input 1
 * @s2: input 2
 * Return: null (fail) or pointer to space in memory for new string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;

	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}

	for (j = 0; k < l; k++, j++)
	{
		s[k] = s2[j];
	}

	s[k] = '\0';

	return (s);
}
