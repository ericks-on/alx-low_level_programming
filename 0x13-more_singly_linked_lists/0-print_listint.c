#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to listint_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_t *cur_node;

	if (h)
	{
		i++;
		printf("%d\n", (h -> n));
		cur_node = h ->next;
		while ((cur_node -> next) != NULL)
		{
			printf("%d\n", (cur_node -> n));
			i++;
			cur_node = cur_node -> next;
		}
		i++;
		printf("%d\n", (cur_node -> n));
		return (i);
	}
	return (i);
}
