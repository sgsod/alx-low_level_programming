/**
  * leet - encodes a string into 1337
  * @str: string to be encoded
  *
  * Return: pointer to encoded string
  */
char *leet(char *str)
{
	char leet[255] = {0};
	int n;

	leet['a'] = leet['A'] = '4';
	leet['e'] = leet['E'] = '3';
	leet['o'] = leet['O'] = '0';
	leet['t'] = leet['T'] = '7';
	leet['l'] = leet['L'] = '1';

	for (n = 0; str[n] != '\0'; n++)
	{
		if (leet[(int) str[n]] != 0)
		{
			str[n] = leet[(int) str[n]];
		}
	}
	return (str);
}
