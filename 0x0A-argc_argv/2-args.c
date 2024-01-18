#include <stdio.h>
/**
  * main - print all arguments followed by newline
  * @argc: number of arguments
  * @argv: arguments
  *
  * Return: 0 success
  */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
