#include<stdio.h>

/**
 * main - entry point
 * write - send message to stdout
 * @fdesc: file description
 * @buf: string array
 * @nbyte: bytes used
 *
 * Return: always 1
 */
int write(int fdesc, const char *buf, unsigned int nbyte);

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
