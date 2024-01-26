#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * print_all - print various formats
  * @format: format string of corresponding argument where;
  *          c == char, i == integer, f == float & s == string,
  *          all other characters will be ignored
  */
void print_all(const char * const format, ...)
{
	char *check;
	int n = 0;
	va_list args;

	va_start(args, format);
	while (format != NULL && format[n] != '\0')
	{
		while (format[n] == 'c' || format[n] == 'i'
				|| format[n] == 'f' || format[n] == 's')
		{
			switch (format[n])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					check = va_arg(args, char *);
					if (check == NULL)
						check = "(nil)";
					printf("%s", check);
					break;
				default:
					break;
			}
			if (format[n + 1] != '\0')
				printf(", ");
			n++;
		}
		n++;
	}
	putchar('\n');
	va_end(args);
}
