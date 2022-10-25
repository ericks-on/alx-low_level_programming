#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * get_len - gets length of a string stored in node of list_t
 * ptr: pointer node in linked list
 *
 * Return: the length of string
 */
size_t get_len(list_t *ptr)
{
	size_t len = 0;
	char *s;

	if ((ptr -> str) != NULL)
	{
		s = ptr -> str;
		while (s[len] != '\0')
			len++;
	}
	return (len);
}
/**
 * print_list - prints all elements of a list_t list
 * h: pointer to a list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int size = 1;
	list_t *temp_ptr;
	unsigned int l;
	char *s;

	temp_ptr = h -> next;
	if ((h -> str) == NULL)
		printf("[0] (nil)\n");
	else
	{
		printf("[%u] %s\n", (h -> len), (h -> str));
	}
	while (temp_ptr != NULL)
	{
		size++;
		s = temp_ptr -> str;
		l = get_len(temp_ptr);
		if ((s) == NULL)
		{
			printf("[0] (nil)");
			temp_ptr = temp_ptr -> next;
		}
		else
		{
			printf("[%u] %s\n", l, s);
			temp_ptr = temp_ptr -> next;
		}
	}
	return (size);
}
