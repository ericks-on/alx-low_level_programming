#include "lists.h"
#include <stddef.h>
/**
 * listint_len - returns number of elements in a linked listint_t list
 * @h: pointer to listint_t list
 *
 * Return: number of elements 
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	listint_t *cur_node;

	if (h)
	{
		i++;
		cur_node = h -> next;
		while ((cur_node -> next) != NULL)
		{
			i++;
			cur_node = cur_node -> next;
		}
		i++;
	}
	return (i);
}
