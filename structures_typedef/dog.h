#ifndef dog_h
#define dog.h

/**
 * struct dog - Define a new type
 * @name: char1
 * @age: float
 * @owner: char2
 * Return: Always 0
 */

  struct dog
{
    char *name;
    float age;
    char *owner;
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
#endif
