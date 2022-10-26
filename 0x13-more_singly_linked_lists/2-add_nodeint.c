#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_nodeint - adds new node at start of list
 * @head: pointer to pointer of start of the list
 * @n: int to be added to a node
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head && n)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new -> next = *head;
		new -> n = n;
		*head = new;
		return (*head);
	}
	return (NULL);
}
