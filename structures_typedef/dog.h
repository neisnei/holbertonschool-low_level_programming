#ifndef dog_h
#define dog_h

/**
 * struct dog - Define a new type struct dog with the following elements:
 * @name: char1
 * @age: float
 * @owner: char2
 */

struct dog
{
char *name;
float age;
char *owner;
};

int main (void)
{
  struct dog my_dog;

  mydog.name = "Reina"
  mydog.age = 3.5;
  mydog.owner = "Nei"

  printf("Name: %s\n", mydog.name);
  printf("Age: %.1f\n", mydog.age);
  printf("Owner: %s\n", mydog.age);
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
