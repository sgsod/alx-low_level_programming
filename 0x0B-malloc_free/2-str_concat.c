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
	unsigned int a, b, c = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		c++;
	for (b = 0; s2[a] != '\0'; b++)
		c++;

	arr = malloc(sizeof(char) * ++c);
	if (arr == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		arr[a] = s1[a];

	for (b = 0; s2[b] != '\0'; b++)
	{
		arr[a] = s2[b];
		a++;
	}

	return (arr);
}
