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
    hash_table_set(ht, "hetairas", "2");
    printf("%s\n", ht->array[key_index((const unsigned char*)"hetairas", ht->size)]->value);
    printf("%s\n", ht->array[key_index((const unsigned char*)"betty", ht->size)]->value);
    hash_table_set(ht, "mentioner", "dm");
    printf("%s\n", ht->array[key_index((const unsigned char*)"mentioner", ht->size)]->value);
    return (EXIT_SUCCESS);
}
