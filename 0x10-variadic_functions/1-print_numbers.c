#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers - print numbers followed by a new line
  * @separator: separating string
  * @n: number of arguments
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list args;

	if (n == 0)
		return;

	va_start(args, n);

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d", va_arg(args, int));
		if (separator && *separator != '\0')
			printf("%s", separator);
	}
	printf("%d\n", va_arg(args, int));

	va_end(args);
}
