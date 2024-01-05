#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: input array for function
 * @size: size of array
 * @action: function to perform
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
