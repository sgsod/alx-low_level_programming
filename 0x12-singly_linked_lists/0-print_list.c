#include "lists.h"
/**
  * print_list - print elements of list_t
  * @h: pointer to node
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	int countNodes = 0;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		if (!(temp->str))
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		countNodes++;
		temp = temp->next;
	}
	return (countNodes);
}
