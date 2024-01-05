#include "hash_tables.h"
/**
 * key_index - gives index of key
 * @key: data input into hash table
 * @size: size of the array
 * Return: index / position of key within hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
