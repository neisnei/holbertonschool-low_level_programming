#include "lists.h"

/**
 *add_node_end - adds a new node at the end
 *@head:needs to be duplicated
 *@str:string
 *Return: the address of the new element, or NUL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *adding;

	adding = malloc(sizeof(list_t));

	if (adding == NULL) || str == (NULL)
		return (NULL);

	adding->str = strdup(str);
	adding->len = strlen(str);
	adding->next = *head;
	*head = adding;
	return (adding);
}
