#include "lists.h"
/**
  * insert_nodeint_at_index - insert a new node at given position in list
  * @head: pointer to head
  * @idx: position to add node in list
  * @n: value to add in node
  * Return: pointer to node (success)|| NULL (failure)
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	node = *head;
	while (count < idx - 1)
	{
		if (!node)
			return (NULL);
		node = node->next;
		count++;
	}
	temp = node->next;
	node->next = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node = node->next;
	node->n = n;
	node->next = temp;
	return (node);
}
