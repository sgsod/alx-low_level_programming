#include "lists.h"
/**
  * print_listint - print all elements of a listint_t list
  * @h: head a.k.a. pointer to first node
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
