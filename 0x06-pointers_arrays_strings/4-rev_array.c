#include "main.h"
/**
  * reverse_array - reverse an array of integers
  * @a: address of string
  * @n: number of elements of the array
  */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	n--;
	c = 0;
	while (c < n)
	{
		b = *(a + c);
		*(a + c) = *(a + n);
		*(a + n) = b;
		n--;
		c++;
	}
}
