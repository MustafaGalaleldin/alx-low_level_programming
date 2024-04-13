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
	unsigned long int i;

	if (!size)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	/*table->array = calloc(size, sizeof(hash_node_t *));*/
	/* calloc to set array positions to 0 */
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
