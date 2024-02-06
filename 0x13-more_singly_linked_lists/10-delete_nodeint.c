#include "lists.h"
/**
  * delete_nodeint_at_index - insert a new node at given position in list
  * @head: pointer to head
  * @index: position to of node to delete in list
  * Return: pointer to node (success)|| NULL (failure)
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int count = 0;

	if (!head)
		return (-1);
	node = *head;
	if (!node)
		return (-1);
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	while (count < index - 1)
	{
		if (!node)
			return (-1);
		node = node->next;
		count++;
	}
	temp = node;
	node = node->next->next;
	free(temp->next);
	temp->next = node;
	return (1);
}
