#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: of the table
 *
 * Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (!size)
		return (NULL);
	table = calloc(1, sizeof(hash_table_t));
	/* calloc to set arrays positions to 0 */
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(table->size * sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
