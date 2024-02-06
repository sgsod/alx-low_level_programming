#include "lists.h"
/**
  * listint_len - compute number of nodes in list
  * @h: head a.k.a pointer to first node
  * Return: number of nodes in list
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
