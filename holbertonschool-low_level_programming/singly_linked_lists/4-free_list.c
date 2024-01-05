#include "lists.h"
/**
 * free_list - frees data assigned to a linked list
 * @head: pointer to head of list being freed
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
