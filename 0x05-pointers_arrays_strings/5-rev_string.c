#include "main.h"
/**
  * rev_string - reverse a string
  * @s: address of string
  */

void rev_string(char *s)
{
	char a;
	int b, c, d;

	for (b = 0; *(s + b); b++)
	{
	}
	b--;
	d = b;
	c = 0;
	while (c <= d)
	{
		a = *(s + c);
		*(s + c) = *(s + b);
		*(s + b) = a;
		if (b > c)
			b--;
		else
			b++;
		c++;
	}
}
