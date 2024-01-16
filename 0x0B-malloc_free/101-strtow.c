#include <stdlib.h>
/**
  * strtow - split a string into array of strings(words)
  * @str: string to be split
  *
  * Return: pointer to array of strings
  *         NULL if function fails, str == NULL or str == ""
  */

char **strtow(char *str)
{
	int slen, plen = 0, len, buff, a = 0;
	char **ptr;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	{
		if (str[len] == ' ')
			continue;
		for (buff = 1; str[len] != '\0' && str[len] != ' '; )
		{
			buff++;
			len++;
		}
		if (buff > slen)
			slen = buff;
		plen++;
	}

	ptr = malloc((sizeof(char *) * plen) + (plen * slen));
	if (ptr == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0' && a < plen; len++)
	{
		if (str[len] == ' ')
			continue;

		*(ptr + a)  = (char *) ptr + ((sizeof(char *) * plen) + (slen * a));
		for (buff = 0; str[len] != '\0' && str[len] != ' '; buff++)
		{
			ptr[a][buff] = str[len];
			len++;
		}
		ptr[a][buff] = '\0';
		a++;
	}

	return (ptr);
}
