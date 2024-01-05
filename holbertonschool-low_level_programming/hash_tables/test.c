#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key to add the element
 * @value: value to add the element
 * Return: 1 if succeeds, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuecopy, *keycopy;
	hash_node_t *bucket, *new_node;

	if (!ht || !key || !*key || !value)
		return (0); /*checks if any ags are null or invalid*/

	valuecopy = strdup(value);
	if (!valuecopy)
		return (0); /*checks for failure during memory alloc*/

	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index] /*finds key index and slot in hash table */

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			{
			free(bucket->value);/*frees prev value before assigning valuecopy*/
			bucket->value = valuecopy;
			return (1); /*success; key already exists*/
			}
			bucket = bucket->next;
	}

	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(valuecopy);
		return (0); /*failure; memory failed to allocate*/
	}

	keycopy = strdup(key);
	if (!keycopy)
	{
		free(valuecopy);
		free(new_node);
		return (0); /*failure; memory failed to allocate*/
	}

	new_node->key = keycopy;
	new_node->value = valuecopy; /*sets key and value data in new node*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node; /*sets pointers to link new node to chain*/
	return (1); /* successfully added new element to hash table*/
}
