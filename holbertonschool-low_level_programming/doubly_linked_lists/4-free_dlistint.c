#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to start of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		dlistint_t *temp = ptr;

		ptr = ptr->next;
		free(temp);
	}
}
