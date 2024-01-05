#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to first node in list
 * @index: position of node to return, starting from 0
 * Return: return node at index position
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
