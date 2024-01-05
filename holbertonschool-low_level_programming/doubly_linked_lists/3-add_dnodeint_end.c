#include "lists.h"
/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to start of list
 * @n: integer to add to the new node
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new;
	new->prev = ptr;

	return (new);
}
