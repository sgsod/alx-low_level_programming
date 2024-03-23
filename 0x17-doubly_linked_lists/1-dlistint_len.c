#include "lists.h"
/**
  * dlistint_len - return number of elements in list
  * @h: dlistint pointer
  *
  * Return: number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nnodes;

	for (nnodes = 0; h != NULL; ++nnodes)
		h = h->next;
	return (nnodes);
}
