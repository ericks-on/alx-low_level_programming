#include "main.h"
/**
 * set_string - sets value of a pointer to a char
 * @s: pointer to pointer to the string to set
 * @to: the pointer to change
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
