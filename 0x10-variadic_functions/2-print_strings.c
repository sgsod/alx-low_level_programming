#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * print_strings - print strings followed by new line
  * @separator: string separator
  * @n: number of args
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	char *str;
	va_list args;

	va_start(args, n);

	for (c = 0; c < n; c++)
	{
		str = va_arg(args, char *);

		if (!str)
			str = "(nil)";

		printf("%s", str);

		if ((separator && *separator != '\0') && c != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
