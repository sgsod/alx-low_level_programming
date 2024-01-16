#include <stdlib.h>
/**
  * alloc_grid - allocate 2D array of int
  * @w: width of grid
  * @h: height of grid
  *
  * Return: ponter to grid, NULL if w or h is 0 or negative
  *         NULL if malloc fails
  */

int **alloc_grid(int w, int h)
{
	int len = 0, len1, len2;
	int *arr, **arr_2d;

	if (w <= 0 || h <= 0)
		return (NULL);

	arr_2d = malloc((sizeof(int) * (w * h)) + (sizeof(int *) * h));
	if (arr_2d == NULL)
		return (NULL);

	arr = (int *) arr_2d + ((sizeof(int **) / sizeof(int)) * h);

	for (len1 = 0; len1 < h; len1++)
	{
		arr_2d[len1] = arr + len;
		for (len2 = 0; len2 < w; len2++)
		{
			*(arr + len) = 0;
			len++;
		}
	}

	return (arr_2d);
}
