/**
  * _strcpy -  copies the string pointed to by src, including the
  * terminating null byte (\0), to the buffer pointed to by dest.
  * @dest: destination of string
  * @src: source of string to be copied
  *
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; *(src + a) != '\0'; a++)
	{
		*(dest + a) = *(src + a);
	}

	*(dest + a) = *(src + a);

	return (dest);
}
