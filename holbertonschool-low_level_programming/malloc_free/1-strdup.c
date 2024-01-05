#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: input string
 * Return: null (fail) or pointer to space in memory for new string
 */
char *_strdup(char *str)
{
	int i, size;
	char *array;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	{

	}

	array = (char *)malloc((size + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = str[i];
	}

	array[size] = '\0';

	return (array);
}
