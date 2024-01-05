#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to start of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int i = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
