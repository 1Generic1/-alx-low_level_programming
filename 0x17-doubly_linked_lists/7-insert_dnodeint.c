#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	unsigned int count = 0;
	dlistint_t *current = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return(NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	while (current != NULL)
	{
		if (idx == count)
		{
			if (current->prev != NULL)
			{
				current->prev->next = new_node;
			}
			else 
				*h = new_node;
			new_node->prev = current->prev;
			new_node->next = current;
			current->prev = new_node;
			return (new_node);
		}
		current = current->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
