#include <string.h>
/**
  * _strchr - find character in string
  * @s: string
  * @c: character to search
  *
  * Return: NULL if not found, pointer to first occurence of c
  */
char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == c)
			return (&s[n]);
	}

	if (c == '\0' && s != NULL)
		return (&s[n]);

	return (NULL);
}
