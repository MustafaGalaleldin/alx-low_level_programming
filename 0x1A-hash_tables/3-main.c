#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "1");
	printf("%s\n", hash_table_get(ht, "hetairas"));
	hash_table_set(ht, "hetairas", "2");
	printf("%s\n", hash_table_get(ht, "hetairas"));
	printf("%s\n", hash_table_get(ht, "betty"));
	hash_table_set(ht, "mentioner", "dm");
	printf("%s\n", hash_table_get(ht, "mentioner"));
	printf("%lu\n", key_index((const unsigned char *)"hetairas", ht->size));
	printf("%lu\n", key_index((const unsigned char *)"mentioner", ht->size));

	return (EXIT_SUCCESS);
}
