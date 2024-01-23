#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - free malloc allocated memory
  * @d: memory to be freed
  */
void free_dog(dog_t *d)
{
	free(d);
}
