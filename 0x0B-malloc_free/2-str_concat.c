#include <stdlib.h>
/**
  * str_concat - combine 2 strings and store at different location
  * @s1: fisrt string
  * @s2: second sring
  *
  * Return: NULL on failure, pointer to location
  */

char *str_concat(char *s1, char *s2)
{
	int a, b, c;
	char *array;

	b = 0;
	for (a = 0; s1[b] != '\0' && s2[a] != '\0';)
	{
		if (s1[b] != '\0')
			b++;
		if (s2[a] != '\0')
			a++;
	}
	c = a + b;
	if (c == 0)
		return (NULL);

	array = malloc(sizeof(char) * c++);
	if (array == NULL)
		return (NULL);
	for (a = 0; a < c; a++)
	{
		if (s1[a] != '\0' && s1 != NULL)
			array[a] = s1[a];
		else
		{
			for (b = 0; s2[b] != '\0' && s2 != NULL; b++)
			{
				array[a] = s2[b];
				a++;
			}
		}
	}
	return (array);
}
