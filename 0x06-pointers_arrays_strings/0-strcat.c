/**
  * _strcat - concatenate two strings
  * Description: append source string to destination
  * @dest: string to be appended to
  * @src: source strip
  *
  * Return: pointer to dest
  */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = src[b];

	return (dest);
}
