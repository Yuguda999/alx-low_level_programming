#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added (starting at 0).
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL); /* Check for memory allocation failure */

	new_node->n = n; /* Set the data (n) for the new node */

	if (idx == 0) /* Special case: insert at the beginning */
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp != NULL)
	{
		if (count == idx - 1) /* Insert before the desired index */
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}

		temp = temp->next;
		count++;

		if (temp == NULL && count != idx - 1)
		{
			free(new_node);
			return (NULL);
		}
	}

	return (NULL); /* Return NULL if the index is out of range */
}
