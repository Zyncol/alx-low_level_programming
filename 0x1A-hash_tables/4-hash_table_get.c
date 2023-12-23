#include "hash_tables.h"
/**
*hash_table_get - retrieves a value
*@ht: the table
*@key: the value
*Return: A pointer
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head = NULL;
	unsigned long int v;

	v = 0;

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}

	v = hash_djb2((unsigned char *)key) % ht->size;
	if (ht->array[v] == NULL)
	{
		return (NULL);
	}
	else
	{
		head = ht->array[v];
		while (head != NULL)
		{
			if (strcmp(head->key, key) == 0)
			{
				break;
			}
			head = head->next;
		}
	}
	return (head->value);
}
