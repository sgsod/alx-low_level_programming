#include "lists.h"
/**
  * pop_listint - delete head of a listint_t list
  * @head: pointer to head
  * Return: n of the head or 0 if head is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (!head)
		return (0);
	if (!(*head))
		return (0);
	h = *head;
	*head = h->next;
	n = h->n;
	free(h);
	return (n);
}
