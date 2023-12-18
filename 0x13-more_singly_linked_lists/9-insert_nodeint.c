#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of the first node in the list
 * @idx: the index  where the new node is to be added
 * @n: data to be inserted in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *newE;
	listint_t *tmp = *head;

	newE = malloc(sizeof(listint_t));
	if (!newE || !head)
		return (NULL);

	newE->n = n;
	newE->next = NULL;

	if (idx == 0)
	{
		newE->next = *head;
		*head = newE;
		return (newE);
	}

	for (x = 0; tmp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			newE->next = tmp->next;
			tmp->next = newE;
			return (newE);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}

