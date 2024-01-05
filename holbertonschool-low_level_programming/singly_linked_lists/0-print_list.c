#include "lists.h"

/**
 * print_list - prints data in a linked list
 * @h: pointer to head node
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	int i = 0;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("[%u] %s\n", ptr->len, ptr->str);
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		ptr = ptr->next;
	}
	return (i);
}
