#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given position in linked list
 * @head: pointer to first node in linked list
 * @idx: index where new node is placed
 * @n: data to insert in new node
 * Return: pointer to the new node, NULL if failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
	}	return (NULL);
}
