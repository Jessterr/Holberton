#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a string of characters
 * @name: the name to print
 * @f: function pointer used to print the name
*/
void print_name(char *name, void (*f)(char *))
{
	char *temp;
	int i = 0;
	int j = 0;

	if (name && f)
	{
		while (name[i] != '\0')
		{
			i++;
		}

		temp = (char *)malloc((i + 1) * sizeof(char));

		if (temp == NULL)
		{
			return;
		}

		while (name[j] != '\0')
		{
			temp[j] = name[j];
			j++;
		}

		temp[i] = '\0';

		f(temp);

		free(temp);
	}
}
