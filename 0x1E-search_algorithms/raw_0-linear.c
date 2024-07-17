#include "search algos.h"
/**
 * linear_search - perfom linear search on integer array
 * @array: pointer to the first element of the array to be searched
 * @size: size of the array
 * @value: value to be searched for
 *
 * Return: -1 if value is not present or array is NULL,
 * index of element if found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;
	char buffer[33];

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (array[index] == value)
			return (index);
		write(STDOUT_FILENO, "Value checked array[", 20);
		itoa(index, buffer, BASE_TEN);
		write(STDOUT_FILENO, buffer, strlen(buffer));
		write(STDOUT_FILENO, "] = [", 5);
		itoa(array[index], buffer, BASE_TEN);
		write(STDOUT_FILENO, buffer, strlen(buffer));
		write(STDOUT_FILENO, "]\n", 2);
	}

	return (-1);
}

/**
 * reverse - reverse a string
 * @str: string to reverse
 * @length: length of string
 */
void reverse(char str[], int length)
{
	int front = 0;
	int back = length - 1;
	char temp;

	if (str == NULL)
		return;

	for (; front < back; front++)
	{
		temp = str[front];
		str[front] = str[back];
		str[back] = temp;
		back--;
	}
}

/**
 * itoa - integer to string
 * @num: integer to convert
 * @str: buffer
 * @base: the base of the integer
 * Return: pointer to string
 */
char *itoa(int num, char *str, int base)
{
	int i = 0;
	bool isNegative = false;
	int conv;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	if (num < 0 && base == 10)
	{
		isNegative = true;
		num = -num;
	}

	while (num != 0)
	{
		conv = num % base;
		if (conv > 9)
			str[i++] = (conv - 10) + 'a';
		else
			str[i++] = conv + '0';
		num = num / base;
	}

	if (isNegative)
		str[i++] = '-';

	str[i] = '\0';

	reverse(str, i);

	return (str);
}
