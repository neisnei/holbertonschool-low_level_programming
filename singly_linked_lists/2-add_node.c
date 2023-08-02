#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node_end - adds a new node at the end
 *@head:needs to be duplicated
 *@str:string
 *Return: the address of the new element, or NUL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node;

	add_node = malloc(sizeof(list_t));

	if(add_node == NULL) || str == NULL)
		return (NULL);

	add_node->str =strdup(str);
	add_node->len = strlen(str);
	add_node->next = *head;
	*head = add_node;
	return (add_node);
}
