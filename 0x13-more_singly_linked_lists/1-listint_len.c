#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		node = node->next;
		count = count + 1;
	}
	return (count);
}
