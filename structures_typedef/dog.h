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
  void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
