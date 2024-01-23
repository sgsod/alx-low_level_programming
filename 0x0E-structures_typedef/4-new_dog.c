#include <stdlib.h>
#include "dog.h"
/**
  * new_dog - store a copy of name and owner
  * @name: dog's name
  * @age: age of dog
  * @owner: owner of dog
  * Return: pointer to struct (success), NULL (failure)
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->owner = owner;
	dog->age = age;
	return (dog);
}
  
