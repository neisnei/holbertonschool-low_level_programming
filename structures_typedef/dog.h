include <stdio.h>
#include "dog.h"

/**
 * struct dog - Define a new type
 *
 * Return: Always 0
 */

  struct dog {

    name, char = "Reina"
    age, float = 3.5
    owner, char = "Nei"
};

int main(void)
{
  struct dog my_dog;

  my_dog.name = "Reina";
  my_dog.age = 3.5;
  my_dog.owner = "Nei";

  printf("Reina: %s\n", mydog.name);
  printf("3.5: %.1f\n", mydog.age);
  printf("Nei: %s\n", mydog.owner);

  Return 0;
}
