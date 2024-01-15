#include <stdlib.h>
/**
  * create_array - create an array of characters
  * and initialize it with character
  * @size: size of arra
  * @c: character filling the array
  *
  * Return: NULL if size is 0 or fails, pointer to array if success
  */

char *create_array(unsigned int size, char c)
{
	unsigned int ind;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(c) * size);
	if (str == NULL)
		return (NULL);
	for (ind = 0; ind < size; ind++)
	{
		str[ind] = c;
	}
	return (str);
}
