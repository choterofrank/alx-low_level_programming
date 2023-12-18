#include "lists.h"

/**
 * get_nodeint_at_index - returns the node of a listint_t linked list
 * @head: the first node in the list
 * @index: the position of the node to be returned
 *
 * Return: address to the given node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tmp = head;

	while (tmp && x < index)
	{
		tmp = tmp->next;
		x++;
	}

	return (tmp ? tmp : NULL);
}

