#include <stdio.h>
/**
  * main - print number of arguments passed in
  * @argc: number of arguments
  * @argv: arguments
  *
  * Return: 0 success
  */

int main(int argc, char *argv[])
{
	printf("%d\n", argc--);
	(void) *argv;

	return (0);
}
