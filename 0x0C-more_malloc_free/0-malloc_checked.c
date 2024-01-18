#include <stdlib.h>
/**
  * malloc_checked - allocates memory using malloc
  * @b: bytes to be allocated
  *
  * Return: pointer to memory or 98 to parent if malloc fails
  */
void *malloc_checked(unsigned int b)
{
	void *mall;

	mall = malloc(b);
	if (mall == NULL)
		exit(98);
	return (mall);
}
