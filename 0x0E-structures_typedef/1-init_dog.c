#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the variable of type struct dog
 * @name: the name of d
 * @age: age of d
 * @owner: owner of d
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(typeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = *name;
	d->age = age;
	d->owner = *owner;
}
