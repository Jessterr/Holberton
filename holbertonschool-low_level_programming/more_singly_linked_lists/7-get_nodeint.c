#include "lists.h"
/**
 * get_nodeint_at_index - returns the [index] node of a listint_t linked list
 * @head: first node in list
 * @index: index of node to return
 * Return: pointer to requested node , NULL if failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	if (temp == NULL)
		return (NULL);
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}	return (temp);
}
