/**
  * _strcmp - compare 2 strings
  * @s1: first string
  * @s2: second string
  *
  * Return: return - if s1 < s2, 0 if s1 == s2 and + if s1 > s2
  */

int _strcmp(char *s1, char *s2)
{
	int b;

	for (b = 0; s1[b] == s2[b]; b++)
	{
		if (s1[b] == '\0')
			return (0);
	}

	return (s1[b] - s2[b]);
}
