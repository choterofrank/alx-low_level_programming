#include "lists.h"

/**
 * sum_listint - evaluates sum of all the data(n) of a listint_t list
 * @head: the first node in the linked list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

