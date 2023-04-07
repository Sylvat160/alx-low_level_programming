#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = 0;
hash_node_t *tmp = NULL;

if (ht == NULL || key == NULL || strlen(key) == 0)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[index];
if (tmp == NULL)
return (NULL);

while (strcmp(tmp->key, key) != 0)
{
tmp = tmp->next;
}
return (tmp->value);
}
