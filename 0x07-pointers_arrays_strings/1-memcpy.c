/**
  * _memcpy - copies specified bytes from string
  * @src: pointer to memory to be copied
  * @dest: constant
  * @n: number of bytes to copy
  *
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
