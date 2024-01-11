/**
  * _strncpy - copy string
  * @dest: string to be pasted to
  * @src: source string
  * @n: number of characters to be copied from source
  *
  * Return: pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[b] = src[b];

	for (; b < n; b++)
		dest[b] = '\0';

	return (dest);
}
