#include "lists.h"

/**
 * sum_listint - Returns the sum of data (n) of a listint_t.
 * @head: Pointer to the head node of the list.
 *
 * Return: Sum of all the data (n), or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
