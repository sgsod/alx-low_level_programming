#include "lists.h"
/**
  * add_nodeint - add node at beginning of list
  * @head: pointer to head
  * @n: value to add in head->n
  * Return: pointer to first node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	if (!head)
		return (NULL);
	h = malloc(sizeof(listint_t));
	if (!h)
		return (NULL);
	h->n = n;
	h->next = *head;

	*head = h;
	return (h);
}
