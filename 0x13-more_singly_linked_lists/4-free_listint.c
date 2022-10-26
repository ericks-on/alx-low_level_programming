#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of listint_t list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *cur_node;
	listint_t *n_node;

	if (head != NULL)
	{
		cur_node = head;
		n_node = cur_node -> next;
		while (n_node != NULL)
		{
			free(cur_node);
			cur_node = n_node;
			n_node = cur_node -> next;
		}
		free(cur_node);
	}
}
