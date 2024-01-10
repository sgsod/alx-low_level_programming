#include "main.h"
/**
  * rev_string - reverse a string
  * @s: address of string
  */

void rev_string(char *s)
{
	char *str;
	int b;
	int c;

	str = s;
	for (b = 0; *(s + b) != '\0'; b++)
	{
	}
	b--;
	c = 0;
	while (b >= 0)
	{
		(s + c) = (str + b);
		c++;
		b--;
	}
}
