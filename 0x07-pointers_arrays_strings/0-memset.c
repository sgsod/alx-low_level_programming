/**
  * _memset - fills specified memory with aconstant byte
  * @s: pointer ro memory to be filled
  * @b: constant\
  * @n: number of bytes to fill
  *
  * Return: pointer to s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
