#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t lists
 * @h: the linked list of type listint_t to traverse
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}


