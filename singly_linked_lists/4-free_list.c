#include "lists.h"

/**
 * free_list - frees a list
 * @head: head
 * Return: Void
*/

void free_list(list_t *head)
{
    list_t *current = head;
    
    while (current != NULL)
    {
        list_t *next = current->next;
        free(current->str);
        free(current);
        current = next;
    }
}
