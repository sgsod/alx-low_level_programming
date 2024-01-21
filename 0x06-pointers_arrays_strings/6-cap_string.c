/**
  * cap_string - convert capitalize words in string
  * @str: string
  *
  * Return: pointer to string
  */

char *cap_string(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			if (str[n - 1] == '.' || str[n - 1] == ',' || str[n - 1] == ';'
					|| str[n - 1] == '!' || str[n - 1] == '?' || str[n - 1] == '"'
					|| str[n - 1] == '(' || str[n - 1] == ')' || str[n - 1] == '{'
					|| str[n - 1] == '\n' || str[n - 1] == '}' || str[n - 1] == ' '
					|| str[n - 1] == '\t' || n == 0)
				str[n] -= 32;
		}
	}
	return (str);
}
