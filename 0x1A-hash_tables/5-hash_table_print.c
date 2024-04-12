#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hashtable
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;
	int iscomma = 1;

	if (!ht || !ht->size)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			if (iscomma)
				printf("\'%s\': \'%s\'", item->key, item->value);
			else
				printf(", \'%s\': \'%s\'", item->key, item->value);
			item = item->next;
			iscomma = 0;
		}
	}
	printf("}\n");
}
