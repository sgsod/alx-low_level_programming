#include "main.h"
/**
  * rev_string - reverse a string
  * @s: address of string
  */

void rev_string(char *s)
{
	char a;
	int b, c;

	for (b = 0; *(s + b); b++)
	{
	}
	b--;
	c = 0;
	while (c < b)
	{
		a = *(s + c);
		*(s + c) = *(s + b);
		*(s + b) = a;
		b--;
		c++;
	}
}
