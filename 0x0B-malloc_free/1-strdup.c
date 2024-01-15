#include <stdlib.h>
/**
  * _strdup - creates copy of string
  * @str: original string
  *
  * Return: NULL if str is NULL or memory is insufficient,
  * return pointer to duplicate string
  */

char *_strdup(char *str)
{
	int a, b;
	char *cstr;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++) /* get size of str */
		;
	a++;

	cstr = malloc(sizeof(*str) * a);
	if (cstr == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
	{
		cstr[b] = str[b];
	}
	return (cstr);
}
