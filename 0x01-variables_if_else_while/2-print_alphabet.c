#include <stdio.h>

/**
  * main - entry point
  * Description: print alphabet with putchar
  *
  * Return: 0
  */

int main(void)
{
	char alph;
	alph = 'a';
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar("\n");

	return (0);
}

