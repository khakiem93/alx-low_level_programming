#include "dog.h"
/**
 * init_dog - Short description
 * @d: First member
 * @name: First member
 * @owner: Second member
 * @age: Third member
 *
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->age = age;
	d->name = name;
	d->owner = owner;
}
