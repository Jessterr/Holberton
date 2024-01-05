#include "lists.h"
/**
 * list_len - returns number of elements in linked list
 * @h: pointer to head node
 * Return: number of nodes in list
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	int i = 0;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	} return (i);
}
