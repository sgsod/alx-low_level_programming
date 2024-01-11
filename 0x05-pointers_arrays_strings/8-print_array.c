#include "main.h"
#include <stdio.h>

/**
  * print_array - print elements of array of integers
  * prints integer followed ',' and  ' ' and ends with '\n'
  * @a: array of integers
  * @n: number of elements
  */

void print_array(int *a, int n)
{
	int b = 0;

	while (n >= 1)
	{
		if (n != 1)
			printf("%d, ", a[b]);
		else
			printf("%d", a[b]);
		b++;
		n--;
	}
	printf("\n");
}
