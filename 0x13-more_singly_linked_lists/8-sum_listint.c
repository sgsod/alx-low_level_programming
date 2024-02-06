#include "lists.h"
/**
  * sum_listint - sum up the data(n) in listint_t list
  * @head: pointer to first node
  * Return: sum || 0 if list is empty
  */
int sum_listint(listint_t *head)
{
	int n = 0;

	if (!head)
		return (0);
	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
