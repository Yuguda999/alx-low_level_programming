#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specified index.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted (starting at 0).
 *
 * Return: (1) if the deletion succeeded, (-1) if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1); /* Check for NULL pointer or an empty list */
	}

	current = *head;

	if (index == 0) /* Special case: delete the head node */
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index - 1) /* Delete the node after the desired index */
		{
			temp = current->next;
			if (temp == NULL)
			{
				return (-1); /* Index is out of range */
			}
			current->next = temp->next;
			free(temp);
			return (1);
		}

		current = current->next;
		count++;

		if (current == NULL && count != index - 1)
		{
			return (-1); /* Index is out of range */
		}
	}

	return (-1); /* Index is out of range */
}
