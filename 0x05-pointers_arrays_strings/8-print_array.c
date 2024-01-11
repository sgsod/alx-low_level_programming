#include <stdio.h>
/**
  * print_array - print elements of array of integers
  * Description: prints integer followed ',' and  ' ' and ends with '\n'
  * @a: array of integers
  * @n: number of elements
  */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", *(a + b));
	}
	printf("%p\n", *(a + b));
}
