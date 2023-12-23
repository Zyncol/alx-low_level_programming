#include "hash_tables.h"
/**
* hash_table_set - adds an element to the hash table
* @ht: the hash table to be updated
* @key: shouldn't be empty
* @value: key value
* Description: function to add an element to a hash table.
* Return: 1 passed, 0 Failed
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *Noden;
	hash_node_t  *Nodet;
	unsigned long int ind = (hash_djb2((const unsigned char *)key) % (ht->size));

	if (ht == NULL)
		return (0);
	if (key == NULL || value == NULL || (strcmp(key, "") == 0))
		return (0);
	if (ht->array[ind] == NULL)
	{Noden = malloc(sizeof(hash_node_t));
		if (Noden == NULL)
			return (0);
		ht->array[ind] = Noden;
		Noden->key = (strdup(key));
		Noden->value = (strdup(value));
		Noden->next = NULL;
		return (1);
	}
	Nodet = ht->array[ind];
	while (Nodet)
	{
		if (strcmp(key, Nodet->key) == 0)
		{free(Nodet->value);
			Nodet->value = (strdup(value));
			return (1);
		}
		Nodet = Nodet->next;
	}
	Nodet = ht->array[ind];
	while (Nodet)
	{Noden = malloc(sizeof(hash_node_t));
		if (Noden == NULL)
			return (0);
		ht->array[ind] = Noden;
		Noden->key = (strdup(key));
		Noden->value = (strdup(value));
		Noden->next = Nodet, ht->array[ind] = Noden;
		return (1);
	}
	return (0);
}
