#include "lists.h"

#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a
 * specific index in a dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	while (current != NULL)
	{
		if (count == index)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;
			else
				*head = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		count++;
		current = current->next;
	}
	return (-1);
}
