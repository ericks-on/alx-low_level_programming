#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stddef.h>
/**
 * add_node_end - adds node to end of list
 * @head:pointer to pointer of linked list
 * @str: string to add to node
 *
 * Return: address of new element or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *cur_node;

	if (head && str)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new -> str = strdup(str);
		new -> next = NULL;
		cur_node = *head;
		while ((cur_node -> next) != NULL)
			cur_node = cur_node -> next;
		cur_node -> next = new;
		return (cur_node -> next);
	}
	return (NULL);
}
