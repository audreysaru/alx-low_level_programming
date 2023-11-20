#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the pointer of the head node.
 *
 * Return: The head node’s data (n), or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp = NULL;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = temp->next;

	free(temp);
	return (data);
}
