#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0; /* Flag to control printing of commas */

	if (ht == NULL)
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
