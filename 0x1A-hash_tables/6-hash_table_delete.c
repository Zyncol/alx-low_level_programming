#include "hash_tables.h"
/**
*hash_table_delete - it delets a hash table
*@ht: referred hash table
* Return: none
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ind;
	hash_node_t *curre = NULL;

	for (ind = 0; ind < ht->size; ind = ind + 1)
	{
		while (ht->array[ind])
		{
			curre = ht->array[ind]->next;
			free(ht->array[ind]->value);
			free(ht->array[ind]->key);
			free(ht->array[ind]);
			ht->array[ind] = curre;
		}
	}
	free(ht->array);
	free(ht);
}
