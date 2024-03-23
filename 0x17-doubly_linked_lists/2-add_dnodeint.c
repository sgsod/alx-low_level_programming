#include "lists.h"
/**
  * add_dnodeint - add node at the biginning of dlistint_t
  * @head: pointer to dlistint pointer
  * @n: value to be added to list
  *
  * Return: pointer to node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	new->next->prev = new;

	return (new);
}
