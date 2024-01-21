/**
  * rot13 - encodes a string into rot13
  * @str: string to be encoded
  *
  * Return: pointer to encoded string
  */
char *rot13(char *str)
{
	char rot[125] = {0};
	short h1 = 'a', h2 = 'n';
	int n;

	for (n = 0; n < 13; n++)
	{
		rot[h1] = h2;
		rot[h2] = h1;
		rot[h1 - 32] = h2 - 32;
		rot[h2 - 32] = h1 - 32;
		h1++;
		h2++;
	}

	for (n = 0; str[n] != '\0'; n++)
	{
		if (rot[(int) str[n]] != 0)
		{
			str[n] = rot[(int) str[n]];
		}
	}
	return (str);
}
