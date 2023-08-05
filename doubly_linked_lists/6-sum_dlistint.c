#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 * @head: pointer to begginer the list
 * Return: If the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int i = 0;

	tmp = head;
	if (!tmp)
		return (0);

	while (tmp)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);
}
