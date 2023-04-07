#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *tmp = NULL;
unsigned long int i = 0;
int flag = 0;

if (ht == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
tmp = ht->array[i];
while (tmp != NULL)
{
if (flag == 1)
{
printf(", ");
}
flag = 1;
printf("'%s': '%s'", tmp->array[i]->key, tmp->array[i]->value);
tmp = tmp->next;
}

}
printf("}");

}
