#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * @h: pointer to to head
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node;

	for (node = 0; h != NULL; node++)
		h = h->next;
	return (node);
}
