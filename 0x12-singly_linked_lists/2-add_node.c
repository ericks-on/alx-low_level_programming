#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * add_node - adds node to start of list
 * @head: pointer to pointer to linked list
 * @string: string to be stored in node
 *
 * Return: address of new element or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head && str)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new -> next = *head;
		new -> str = strdup(str);
		*head = new;
		return (*head);
	}
	return (NULL);
}
