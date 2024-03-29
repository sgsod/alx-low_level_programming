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
	void *NULL = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == c)
			return (&s[n]);
	}
	return (NULL);
}
