#include <stdlib.h>
/**
  * string_nconcat - concatenate two strings
  * Description: create new string starting with s1
  *              followed by n characters of s2 or all
  * @s1: first string
  * @s2: second string
  * @n: number of s2 characters to be copied
  *
  * Return: pointer to new string, NULL if fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int c, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (sizeof(n) < sizeof(s2))
		str = malloc(sizeof(s1) + n - 1);
	else
		str = malloc(sizeof(s1) + sizeof(s2) - 1);
	if (str == NULL)
		return (NULL);

	for (c = 0; s1[c] != '\0'; c++)
	{
		str[len] = s1[c];
		len++;
	}
	for (c = 0; c < n && s2[c] != '\0'; c++)
	{
		str[len] = s2[c];
		len++;
	}
	str[len] = '\0';
	return (str);
}
