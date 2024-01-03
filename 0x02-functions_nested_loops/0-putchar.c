#include "main.h"
/**
  * main - print _putchar to stdout
  *
  * Return: 0 success
  */

int main(void)
{
	char str[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}
