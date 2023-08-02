#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 *add_node_end - adds a new node at the end
 *@head:needs to be duplicated
 *@str:string
 *Return: the address of the new element, or NUL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *adding;

	adding = malloc(sizeof(list_t));

	if(adding == NULL) || str == NULL)
		return (NULL);

	adding->str =strdup(str);
	adding->len = strlen(str);
	adding->next = *head;
	*head = adding;
	return (adding);
}
=======
 * add_node - adds a new node at the beginning of a list
 * @head: begginer
 * @str:
>>>>>>> 8b6f233dc3b520ff1e0f5ad5876770fb6f851c4f
