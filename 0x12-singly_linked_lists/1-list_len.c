#include "lists.h"
#include <stddef.h>
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int n = 1;
	list_t *temp_ptr;

	if (h)
	{
		temp_ptr = h -> next;
		while (temp_ptr != NULL)
		{
			n++;
			temp_ptr = temp_ptr -> next;
		}
	}
	return (n);
}
