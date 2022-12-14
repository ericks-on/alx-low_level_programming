#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to list_t list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *freeit = NULL;

	while ((freeit = head) != NULL)
	{
		head = head->next;
		free(freeit->str);
		free(freeit);
	}
}
