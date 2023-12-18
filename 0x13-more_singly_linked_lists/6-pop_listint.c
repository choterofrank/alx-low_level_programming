#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked  list
 * @head: address to the first element in the list
 *
 * Return: the head node's data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (numb);
}
