#include "main.h"
/**
* malloc_checked - allocates memory using malloc
* if fails malloc_checked will terminate with value of 98
*
* @b: allocated memory
*
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
