#include <stdio.h>
/**
  * main - print name of program
  * @argv: pointer to array of strings
  * @argc: number of strings
  *
  * Return: 0 success
  */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
