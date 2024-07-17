#include "search_argos.h"

/**
 * binary_search - searches for value in array
 * @array: array of integers
 * @size: size of array
 * @value: integer to be found
 *
 * Return: -1 if `value` isn't found or array is NULL
 * Index of `value` returned when found
 */

int binary_search(int *array, size_t size, int value)
{
	int index;
	int max, min, mid;

	if (array == NULL)
		return (-1);

	max = size - 1;

	for (min = 0; min <= max;)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (index = 0; index < size; index++)
		{
			if (index == size - 1)
				printf("%i\n", array[index]);
			else
				printf("%i, ", array[index]);
		}

		if (array[mid] < value)
			min = ++mid;
		else if (array[mid] > value)
			max = --mid;
		else
			return (mid);
	}

	return (-1);

}
