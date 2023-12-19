#include <stdio.h>

/**
  * main - entry point
  * Description: print numbers of base 16
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
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar(10);

	return (0);
}

