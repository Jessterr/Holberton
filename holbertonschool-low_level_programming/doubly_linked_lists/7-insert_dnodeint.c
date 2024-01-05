#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to first node in list
 * @idx: index where new node should be placed. index starts at 0
 * @n: data to insert into new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *prev_node, *post_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	post_node = *h;
	while (post_node != NULL && i < idx)
	{
		prev_node = post_node;
		post_node = post_node->next;
		i++;
	}
	if (i < idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (i == 0)/* insert at beginning */
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else/* insert at idx position */
	{
		prev_node->next = new_node;
		new_node->prev = prev_node;
		new_node->next = post_node;
		if (post_node != NULL)
			post_node->prev = new_node;
	}
	return (new_node);
}
