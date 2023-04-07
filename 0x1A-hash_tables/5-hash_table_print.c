#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table
 * @ht: hash table
 * Return: prints hash table to console
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node = NULL;
unsigned long int i = 0;
int comma = 0;

if (ht == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
if (comma == 1)
printf(", ");

comma = 1;
printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
node = node->next;
}
}
printf("}\n");
}
