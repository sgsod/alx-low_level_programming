#include "main.h"
/**
  * rev_array - reverse an array of integers
  * @a: address of string
  * @n: number of elements of the array
  */

void rev_array(int *a, int n)
{
	int b;
	int c;

	n--;
	c = 0;
	while (c < n)
	{
		b = *(s + c);
		*(s + c) = *(s + n);
		*(s + n) = b;
		n--;
		c++;
	}
}
