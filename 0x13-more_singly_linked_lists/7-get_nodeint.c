#include "lists.h"
/**
  * get_nodeint_at_index - search through the listint_t list
  * @head: pointer to head
  * @index: index of node searched for
  * Return: nth node (success) || NULL (failure)
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (n < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		n++;
	}
	return (head);
}
