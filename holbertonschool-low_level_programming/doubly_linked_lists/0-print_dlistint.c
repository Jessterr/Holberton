#include "lists.h"
/**
 * print_dlistint - prints all of the elements of a dlistint_t
 * @h: pointer to start of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int i = 0;

	while (ptr != NULL)
	{
		if (ptr->n == 0)
			printf("0\n");
		else
			printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
