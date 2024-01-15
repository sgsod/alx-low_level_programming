#include "main.h"
/**
  * rev_array - reverse an array of integers
  * @a: address of string
  * @n: number of elements of the array
  */

void rev_array(int *a, int n)
{
	char a;
	int c;

	n--;
	c = 0;
	while (c < n)
	{
		a = *(s + c);
		*(s + c) = *(s + n);
		*(s + n) = a;
		b--;
		c++;
	}
}
