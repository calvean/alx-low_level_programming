#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to the beginning of the list
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	first = *head;
	*head = first->next;
	i = first->i;
	free(first);
	return (i);
}
