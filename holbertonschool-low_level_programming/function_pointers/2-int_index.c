#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - compares array with function cmp
 * @array: input array for function
 * @size: number of elements in array
 * @cmp: pointer to function used to compare
 *
 * Return: index of first match, -1 if no match or if size < 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
