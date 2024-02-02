#include "lists.h"
/**
  * list_len - count number of elements of list_t
  * @h: pointer to node
  * Return: number of nodes
  */
size_t list_len(const list_t *h)
{
	int countNodes = 0;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		countNodes++;
		temp = temp->next;
	}
	return (countNodes);
}
