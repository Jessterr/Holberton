#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: input size
 * @c: input character
 * Return: returns pointer to array or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
