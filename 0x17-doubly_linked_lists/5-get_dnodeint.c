#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth
 * node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; head != NULL && i < index; i++)
{
head = head->next;
}

return (head);

}
