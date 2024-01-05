#include "lists.h"
/**
 * add_nodeint - adds new node at beginning of listint_t list
 * @head: pointer to head node
 * @n: data to put into new node
 * Return: pointer to new node, NULL if failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
