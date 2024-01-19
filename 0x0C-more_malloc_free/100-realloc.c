#include <stdlib.h>
/**
  * _realloc - change size of memory block initialized with malloc
  * @ptr: pointer to memory block allocated with malloc
  * @old_size: size of old memory block
  * @new_size: new size of memory block
  *
  * Return: Pointer to new memory or null if error
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int c;
	unsigned char *swp, *swp1;

	if (!ptr)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	swp = new;
	swp1 = ptr;
	for (c = 0; c < new_size && c < old_size; c++)
		swp[c] = swp1[c];

	free(ptr);
	return (new);
}
