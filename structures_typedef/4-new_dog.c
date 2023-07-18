#include <stdio.h>
#include <stdlib>
#include <string.h>
#include "dog.h"

/**
 * dog_t *new_dog - Write a function that creates new dog
 * *name - char1
 * age - float
 * *owner - char2
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL)
	{
	new_dog.name = "Beby";
    new_dog.age = 3.5;
    new_dog.owner = "Bob";
	}
}

