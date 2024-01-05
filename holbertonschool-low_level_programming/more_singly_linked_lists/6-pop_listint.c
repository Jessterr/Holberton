#include "lists.h"
/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to head node
 * Return: the data inside the deleted node, or 0 if no data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data);
}
