#include "hash_tables.h"

/**
  * hash_table_set - setting a node into an hash table.
  *
  * @ht: is the hash table.
  * @key: is the node key.
  * @value: is the node value.
  *
  * Return: 1 on success / 0 if failed.
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *value_copy;
	hash_node_t *tmp;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_copy);
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
