#include "hash_tables.h"
/**
*hash_table_create - Creating a hash table
*@size: array size
*Return: NUll for any error
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *crt;
	unsigned long int ind;

	crt = malloc(sizeof(hash_table_t));
	if (crt == NULL)
	{
		return (NULL);
	}
	crt->size = size;
	crt->array = malloc(sizeof(hash_node_t *) * size);
	if (crt->array == NULL)
	{
		return (NULL);
	}
	for (ind = 0; ind < size; ind++)
	{
		crt->array[ind] = NULL;
	}
	return (crt);
}
