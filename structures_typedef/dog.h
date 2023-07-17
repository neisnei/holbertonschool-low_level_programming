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

  my_dog.name = "Reina"
  my_dog.age = 3.5;
  my_dog.owner = "Nei"

  printf("Name: %s\n", my_dog.name);
  printf("Age: %.1f\n", my_dog.age);
  printf("Owner: %s\n", my_dog.age);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
