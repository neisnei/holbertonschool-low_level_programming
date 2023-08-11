#include "hash_tables.h"

/**
 * hash_table_print - that prints a hash table.
 * @ht: is the hash table
 * Return: Always exit_success
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cpy;
	unsigned long int count;
	int flag = 0;

	if (ht != NULL)
	{
		printf("{");
		count = 0;
		while (count < ht->size)
		{
			cpy = ht->array[count];
			while (cpy)
			{
				if (flag != 0)
				{
					printf(", ");
				}
				flag = 1;
				printf("'%s': '%s'", cpy->key, cpy->value);
				cpy = cpy->next;
			}
			count++;
		}
		printf("}\n");
	}
}
