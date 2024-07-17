#include "search algos.h"
/**
 * linear_search - perfom linear search on integer array
 * @array: pointer to the first element of the array to be searched
 * @size: size of the array
 * @value: value to be searched for
 *
 * Return: -1 if value is not present or array is NULL,
 * index of element if found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;
	char buffer[33];

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%li] = [%i]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
