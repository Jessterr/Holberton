#include "lists.h"
/**
 * sum_dlistint - returns sum of all data (n) of a dlistint_t linked list
 * @head: pointer to first node in list
 * Return: sum of data or NULL if failed
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
