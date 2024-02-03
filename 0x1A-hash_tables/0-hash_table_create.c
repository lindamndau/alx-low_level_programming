#include "hash_tables.h"

/**
 * @ Discription - creates new hash table
 * Returns pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t * hash_table = (hash_table_t*)malloc(sizeof(size));
	if(hash_table == NULL)
	{
		return NULL;
	}
	return hash_table;
}
