/**
  * _strcpy -  copies the string pointed to by src, including the 
  * terminating null byte (\0), to the buffer pointed to by dest.
  * @dest: address of string
  * @
  *
  * Return: pointer to dest
  */

int *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; *(src + a) != '\0'; a++)
	{
		*(dest + a) = *(src + a);
	}

	*(dest + a) = *(src + a);

	return (dest);
}
