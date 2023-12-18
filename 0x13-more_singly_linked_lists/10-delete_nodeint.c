#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * of a linked list
 * @head: the pointer of first element in the linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *Current = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (x < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		x++;
	}


	Current = tmp->next;
	tmp->next = Current->next;
	free(Current);

	return (1);
}

