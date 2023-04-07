#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;
hash_node_t *new_node = NULL, *tmp = NULL;

if (ht == NULL || key == NULL || strlen(key) == 0)
return (0);

index = key_index((const unsigned char *)key, ht->size);
new_node = ht->array[index];

if (new_node && strcmp(new_node->key, key) == 0)
{
free(new_node->value);
new_node->value = strdup(value);
return (1);
}

tmp = malloc(sizeof(hash_node_t));
if (tmp == NULL)
return (0);

tmp->key = strdup(key);
tmp->value = strdup(value);
tmp->next = ht->array[index];
ht->array[index] = tmp;
return (1);
}
