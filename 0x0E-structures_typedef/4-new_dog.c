#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* new_dog - Short description
* @name: First member
* @owner: Second member
* @age: Third member
*
* Description: Longer description
* Return: Always 0.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->age = age;
	d->name = name;
	d->owner = owner;
	return (d);
}
