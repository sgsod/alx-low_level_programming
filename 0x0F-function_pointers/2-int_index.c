/**
  * int_index - searches for integer
  * @array: array of integers
  * @size: number of elements in array
  * @cmp: function that compares the values
  *
  * Return: index of matching value (success),
  *         -1: if size <= 0 or no matches found
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n, ret;

	if (size <= 0)
		return (-1);
	for (n = 0; n < size; n++)
	{
		ret = cmp(array[n]);
		if (ret != 0)
			return (n);
	}

	return (-1);
}
