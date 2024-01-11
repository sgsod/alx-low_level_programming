/**
  * _strncat - concatenate two strings
  * Description: append n characters from source string to destination
  * @dest: string to be appended to
  * @src: source strip
  * @n: number of characters to be copied from source
  *
  * Return: pointer to dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';

	return (dest);
}
