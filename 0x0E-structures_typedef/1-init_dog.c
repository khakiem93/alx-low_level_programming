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
	d->age = age;
	d->name = name;
	d->owner = owner;
}
