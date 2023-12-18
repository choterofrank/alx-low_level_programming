#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: the pointer to first node in the linked list
 * @n: the data to be inserted in that new node
 *
 * Return: address of the new elemnt, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newE;

	newE = malloc(sizeof(listint_t));
	if (!newE)
		return (NULL);

	newE->n = n;
	newE->next = *head;
	*head = newE;

	return (newE);
}

