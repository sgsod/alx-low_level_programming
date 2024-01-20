#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _errorcheck(int argc, char *argv[]);
int _contval(char *str1);
int _cfzero(char *str);
int _swpval(char *str);
int mul(char *ans, char *str1, char *str2);
int print_ans(char *ans);
/**
  * main - multiply two numbers
  * @argc: number of arguments
  * @argv: arguments
  *
  * Return: 0 success, 98 failure
  */

int main(int argc, char *argv[])
{
	char *ans;

	_errorcheck(argc, argv);
	_cfzero(argv[1]);
	_cfzero(argv[2]);
	_contval(argv[1]);
	_contval(argv[2]);
	_swpval(argv[1]);
	_swpval(argv[2]);

	ans = malloc(strlen(argv[1]) + strlen(argv[2]) - 1);
	if (ans == NULL)
		return (0);

	mul(ans, argv[1], argv[2]);
	print_ans(ans);

	free(ans);
	return (0);
}
/**
  * _errorcheck - check if input is digit & number of args
  * @argc: number of arguments
  * @argv: arguments
  *
  * Return: 0 success, 98 failure
  */

int _errorcheck(int argc, char *argv[])
{
	int index, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (index = 1; index < argc; index++)
	{
		for (j = 0; argv[index][j] != '\0'; j++)
		{
			if (!(argv[index][j] >= '0' && argv[index][j] <= '9'))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	return (0);
}
/**
 * _contval - convert characters to values
 * @str: string
 */
int _contval(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		str[n] = str[n] - '0';
	return (0);
}
/**
  * _cfzero - check for zero, if value of sting digits == 0
  * @str: string
  * Return: 0 always success
  */
int _cfzero(char *str)
{
	int n, b;

	for (n = 0; str[n] == '0'; n++)
		;
	for (b = 0; str[n] != '\0'; b++)
	{
		n++;
	}
	if (b == 0)
	{
		_putchar('0');
		_putchar('\n');
		exit(0);
	}
	else
		return (0);
}
/**
  * _swpval - reverse string
  * @str: string to reverse
  * Return: void
  */
int _swpval(char *str)
{
	int num1, num2;
	char c;

	num1 = sizeof(str) - 2;
	for (num2 = 0; num2 < num1; num2++)
	{
		c = str[num2];
		str[num2] = str[num1];
		str[num1] = c;
		num1--;
	}
	return (0);
}
/**
  * mul - multiply 2 numbers
  * @ans: answer
  * @str1: first number
  * @str2: second number
  */
int mul(char *ans, char *str1, char *str2)
{
	int n, m, b, m1, n1;

	n1 = sizeof(str2) - 2;
	m1 = sizeof(str1) - 2; 
	ans[0] = 0;
	for (n = 0; n < n1; n++)
	{
		b = n;
		for (m = 0; m < m1; m++)
		{
			if (n == 0)
				ans[b] = str1[m] * str2[n];
			else
				ans[b] = str1[m] * str2[n] + ans[b];
			if (b > 0)
			{
				ans[b] = (ans[b-1] / 10) + ans[b];
				ans[b-1] = ans[b-1] % 10;
			}
			b++;
		}
	}
	return (0);
}
/**
  * print_ans - print string of digits
  * @ans: string
  */
int print_ans(char *ans)
{
	int n;

	n = sizeof(ans) - 1;
	while (n >= 0)
	{
		if (ans[n] > 10)
		{
			_putchar('0' + (ans[n] / 10));
			_putchar('0' + (ans[n] % 10));
			n--;
			continue;
		}
		_putchar('0' + ans[n]);
		n--;
	}
	_putchar('\n');
	return (0);
}
