#include "main.h"
/**
  * rev_string - reverse a string
  * @s: address of string
  */

void rev_string(char *s)
{
	char *str;
	char a;
	int b, c, d;

	str = s;
	for (b = 0; *(s + b); b++)
	{
	}
	b--;
	d = b;
	c = 0;
	while (c <= d)
	{
		a = *(s + c);
		*(s + c) = *(str + b);
		*(str + b) = a;
		c++;
		if (b > c)
			b--;
		else
			b++;
	}
}
