#include "main.h"
/**
  * rev_string - reverse a string
  * @s: address of string
  */

void rev_string(char *s)
{
	int length = sizeof(s);
	char str[length];
	int b;
	int c;

	for (b = 0; *(s + b) != '\0'; b++)
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
