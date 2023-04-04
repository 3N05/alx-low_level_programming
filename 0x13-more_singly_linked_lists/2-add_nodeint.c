#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - A function that adds a new node at the beginning
 * @head: A pointer to listint_T structure
 * @n: An integer data to put into the new node
 * Return: the address of the new element or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
