#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: hashtable to be deleted
 * Return: Nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *h, *tmp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		h = ht->array[i];
		if (h)
		{
			while (h)
			{
				tmp = h;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				h = h->next;
			}
			free(h);
		}
		else
		{
			free(h->key);
			free(h->value);
			free(h);
		}
	}
	free(ht->array);
	free(ht);
}
