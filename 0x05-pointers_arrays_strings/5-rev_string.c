#include "main.h"
/**
  * rev_string - reverse a string
  * @s: address of string
  */

void rev_string(char *s)
{
	length = sizeof(s);
	char a[length];
	int b;
	int c;

	a = s;
	for (b = 0; *(s + b) != '\0'; b++)
	{
		*(a + b) = *(s + b);
	}
	b--;
	c = 0;
	while (b >= 0)
	{
		*(s + c) = *(a + b);
		c++;
		b--;
	}
}
