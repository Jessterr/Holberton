#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *bucket;
	int commas = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			if (commas)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			commas = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
