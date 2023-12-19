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

	alph = '0';
	while (alph <= '9')
	{
		putchar(alph);
		alph++;
	}
	putchar(10);

	return (0);
}

