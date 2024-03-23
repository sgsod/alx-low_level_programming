#include "lists.h"
/**
  * print_dlistint - print elements of linked list
  * @h: dlistint_t list pointer
  *
  * Return: number of nodes printed
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nnodes;

	for (nnodes = 0; h != NULL; ++nnodes)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nnodes);
}
