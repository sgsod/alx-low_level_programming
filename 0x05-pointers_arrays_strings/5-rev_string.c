#include "main.h"
/**
  * rev_string - reverse a string
  * @s: address of string
  *
  * Return: nothing
  */

int rev_string(char *s)
{
	int *a;
	int b;
	int c;

	a = s;
	for (b = 0; *(s + b) != '\0'; a++)
	{
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
