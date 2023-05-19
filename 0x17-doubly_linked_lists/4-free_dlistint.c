#include "lists.h"

/**
 * free_dlistint - frees a double linked list with only int data
 * @head: pointer to the head
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
