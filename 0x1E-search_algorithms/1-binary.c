#include "search_algos.h"

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

	min = 0;
	max = size - 1;

	while (min <= max)
	{
		mid = (min + max) / 2;

		printf("Searching in array: ");
		for (index = min; index <= max; index++)
		{
			if (index == max)
				printf("%i\n", array[index]);
			else
				printf("%i, ", array[index]);
		}

		if (array[mid] < value)
			min = mid + 1;
		else if (array[mid] > value)
			max = mid - 1;
		else
			return (mid);
	}

	return (-1);

}
