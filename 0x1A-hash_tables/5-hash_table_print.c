#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: is the hash table.
 * return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int coma;
	hash_node_t *tmp;

	if (!ht)
		return;
	coma = 0;
	i = 0;
	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (tmp->key != NULL && tmp->value != NULL)
			{
				if (coma)
					printf(", ");
				coma = 1;
				printf("'%s': '%s'", tmp->key, tmp->value);
			}
			tmp = tmp->next;
		}
		i++;

	}
	printf("}\n");
}
