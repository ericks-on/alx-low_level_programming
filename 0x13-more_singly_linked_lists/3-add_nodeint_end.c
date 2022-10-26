#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds node to end of alinked list
 * @head: pointer to pointer to linked list
 * @n: value to be added to node 
 *
 * Return:address of new element or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *cur_node;

	if (head && n)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new -> next = NULL;
		new -> n = n;
		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		cur_node = *head;
		while (cur_node -> next != NULL)
			cur_node = cur_node -> next;
		cur_node -> next = new;
		return (cur_node -> next);
	}
	return (NULL);
}
