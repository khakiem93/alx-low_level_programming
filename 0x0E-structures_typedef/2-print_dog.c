#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Short description
 * @d: First member
 * Description: Longer description
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("(nil)");
		}
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f \n", d->age);

		if (d->owner == NULL)
		{
			printf("(nil)");
		}
		else
			printf("Owner: %s\n", d->owner);
	}
}