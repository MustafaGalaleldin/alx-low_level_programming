#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @size: of the table
 * @key: the key wanted to get its index
 *
 * Return:  index at which the key/value pair should be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;
	return (idx);
}
