#include <stdlib.h>
/**
  * array_range - create array of integers from min to max
  *               containing values from min - max respectively
  * @min: first integer value
  * @max: last integer value
  * Return: pointer to array, NULL if malloc fails or min > max
  */
int *array_range(int min, int max)
{
	int count, *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL); /* Out of space */

	for (count = 0; min <= max; count++)
	{
		array[count] = min;
		min++;
	}
	return (array);
}
