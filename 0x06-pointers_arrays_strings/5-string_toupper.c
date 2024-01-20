/**
  * string_toupper - convert string to all uppercase
  * @str: string
  *
  * Return: pointer to string
  */

char *string_toupper(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] >= 'a' && str[n] <= 'z')
			str[n] -= 32;
	}
	return (str);
}
