/**
  * _strcmp - compare 2 strings
  * @s1: first string
  * @s2: secon string
  *
  * Return: return -1 if s1 < s2, 0 if s1 == s2 and 1 if s1 > s2
  */

int _strcmp(char *s1, char *s2)
{
	int a, b;

	for (b = 0; s1[b] != '\0'; b++)
		;
	for (a = 0; s2[a] != '\0'; a++)
		;

	return (b - a);
}
