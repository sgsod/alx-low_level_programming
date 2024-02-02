#include "lists.h"
/**
  * add_node_end - add node at the end of a list_t list
  * @head: pointer to head
  * @str: string to copy to head->str
  * Return: address of new node (succeeded) || NULL (failed)
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *copy;

	copy = *head;
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->next = NULL;
	temp->str = strdup(str);
	temp->len = strlen(str);
	if (*head == NULL)
		*head = temp;
	else
	{
		while (copy->next != NULL)
			copy = copy->next;
		copy->next = temp;
	}

	return (temp);
}
