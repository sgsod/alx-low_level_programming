#include "lists.h"
/**
  * add_nodeint_end - add new node at end of list
  * @head: ponter to head
  * @n: value to add in new element
  * Return: pointer to new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;

	if (!head)
		return (NULL);
	h = *head;
	if (!h)
	{
		*head = malloc(sizeof(listint_t));
		if (!(*head))
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}

	while (h->next)
		h = h->next;
	h->next = malloc(sizeof(listint_t));
	if (!(h->next))
		return (NULL);
	h = h->next;
	h->n = n;
	h->next = NULL;
	return (h);
}
