#include <stdio.h>
#include "dog.h"

/**
 * print_dog - write a function that prints a struct dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d = NULL)
	{
	d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
	printf("Age: %f\n", d->age);
	d-> owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
