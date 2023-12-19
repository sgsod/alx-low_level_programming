#include <stdio.h>

/**
  * main - entry point
  * Description: print alphabet with putchar
  * but missing "q" and "e"
  *
  * Return: 0
  */

int main(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		if (alph != 'q' && alph != 'e')
		{
		putchar(alph);
		alph++;
		}
	}
	putchar(10);

	return (0);
}

