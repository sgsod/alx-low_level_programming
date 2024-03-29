#include "dog.h"
/**
  * init_dog - initializes a variable of type struct dog
  * @d: pointer to struct
  * @name: name of dog.
  * @age: dog's age.
  * @owner: who the dog belongs to.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
#define NULL ((void *) 0)
	if (d == NULL)
		return;
	if (name != NULL)
		d->name = name;
	d->age = age;
	if (owner != NULL)
		d->owner = owner;
#undef NULL
}

