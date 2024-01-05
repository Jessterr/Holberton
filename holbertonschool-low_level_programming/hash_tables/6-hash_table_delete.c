#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table and frees it's nodes
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bucket, *deleteme;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			deleteme = bucket;
			bucket = bucket->next;
			if (deleteme->key)
				free(deleteme->key);
			if (deleteme->value)
				free(deleteme->value);
			free(deleteme);
		}
	}
	free(ht->array);
	free(ht);
}
