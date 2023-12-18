#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: the pointer to first element in the linked list
 * @n: the data to be inputed in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newE;
	listint_t *temp = *head;

	newE = malloc(sizeof(listint_t));
	if (!newE)
		return (NULL);

	newE->n = n;
	newE->next = NULL;

	if (*head == NULL)
	{
		*head = newE;
		return (newE);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newE;

	return (newE);
}

