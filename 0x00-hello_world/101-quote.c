#include <stdio.h>
/**
 * main - entry point
 * write - print message on stdout without printf or puts
 * Return: 1 success
 */
int write(int fdesc, const char *buf, unsigned int nbyte);

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
