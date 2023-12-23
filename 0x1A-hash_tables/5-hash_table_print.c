#include "hash_tables.h"
/**
*hash_table_print - Prints the table
*@ht: the table
*Return: key/value pair
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ind = 0;
	unsigned long int mbe = 0;
	hash_node_t *head = NULL;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (ht->size > ind)
	{
		head = ht->array[ind];
		while (head != NULL)
		{
			if (mbe == 1)
			{
				printf(", ");
			}

			printf("'%s': '%s'", head->key, head->value);
			mbe = 1;
			head = head->next;
		}
		ind = ind + 1;
	}
	printf("}\n");
}
