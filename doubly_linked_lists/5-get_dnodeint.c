#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to begginer
 * @index: of the node, starting at 0
 * Return: return null if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0, j = 0;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (index > i)
		return (NULL);
	tmp = head;
	while (j != index)
	{
		tmp = tmp->next;
		j++;
	}
	return (tmp);
}
