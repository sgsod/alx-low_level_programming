#include <stdlib.h>
/**
  * _calloc - allocate memory for an array
  * Description: allocates memory for an array of nmemb
  *              elements of size bytes each and returns
  *              a pointer to the allocated memory.
  * @nmemb: number of elements
  * @size: size of elements
  *
  * Return: pointer to allocated mem, NULL if malloc fails
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;
	unsigned int count;
	unsigned char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	b = (unsigned char *) c;
	for (count = 0; count < (nmemb * size); count++)
	{
		b[count] = 0;
	}
	return (c);
}
