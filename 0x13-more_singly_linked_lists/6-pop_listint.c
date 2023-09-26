#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0); /* Check for NULL pointer or an empty list */

	temp = *head; /* Save the current head node */
	*head = (*head)->next; /* Move the head to the next node */
	data = temp->n; /* Get the data from the old head node */
	free(temp); /* Free the old head node */

	return (data);
}
