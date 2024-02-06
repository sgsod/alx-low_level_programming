#include "lists.h"
/**
  * reverse_listint - reverses a listint linked list
  * @head: pointer to head
  * Return: pointer to first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *node;

	if ((*head)->next == NULL)
		return (*head);
	temp = *head;
	if (!temp)
		return (NULL);
	*head = temp->next;
	*head = reverse_listint(head);
	while (temp)
	{

	}

}
