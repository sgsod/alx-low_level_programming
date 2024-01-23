#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - store a copy of name and owner
  * @name: dog's name
  * @age: age of dog
  * @owner: owner of dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t) - sizeof(float));
	if (dog == NULL)
		return (NULL);
	if (name != NULL)
		dog->name = name;
	if (owner != NULL)
		dog->owner = owner;
	return (dog);
}
  
