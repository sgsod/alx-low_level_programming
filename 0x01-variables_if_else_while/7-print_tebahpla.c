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

	alph = 'z';
	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar(10);

	return (0);
}

