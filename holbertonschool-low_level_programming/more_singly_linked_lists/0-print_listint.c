#include "lists.h"
/**
 * print_listint -  prints all elements of listint_t list
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int i = 0;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->n != -1)
			printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (i);
}
