#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return; /* Check for NULL pointer or an empty list */

	while (*head != NULL)
	{
		current = *head;      /* Save the current node */
		*head = (*head)->next; /* Move the head to the next node */
		free(current);        /* Free the current node */
	}
}
