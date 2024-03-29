#include "lists.h"
/**
  * free_listint - free a listint_t list
  * @head: pointer to first node of list
  */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
