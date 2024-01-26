#include <stddef.h>
/**
  * array_iterator - execute function on each element of an array
  * @size: size of array
  * @action: pointer to function to be executed
  * @array: pointer to array
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array && action)
		for (n = 0; n < size; n++)
			action(array[n]);
}
