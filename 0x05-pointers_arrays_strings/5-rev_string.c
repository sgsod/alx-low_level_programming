#include "main.h"
/**
  * rev_string - reverse a string
  * @s: address of string
  */

void rev_string(char *s)
{
	int a = _strlen(s);
	char str[a];
	int b;
	int c;

	for (b = 0; *(s + b); b++)
	{
	}
	for (b = 0; *(s + b); b++)
	{
		*(str + b) = *(s + b);
	}
	b--;
	c = 0;
	while (b >= 0)
	{
		*(s + c) = *(str + b);
		c++;
		b--;
	}
}

/**
  * _strlen - calculate length of string pointed to
  * @s: address of string
  *
  * Return: length of string
  */

int _strlen(char *s)
{
	int a;

	for (a = 0; *(s + a) != '\0'; a++)
	{
	}
	return (a);
}
