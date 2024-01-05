#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index of listint_t linked list
 * @head: pointer to first element in list
 * @index: index of node to delete
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	while (i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
