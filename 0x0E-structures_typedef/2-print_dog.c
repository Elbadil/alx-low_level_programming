#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print struct dog
 * @d: memeory address of struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nill)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
