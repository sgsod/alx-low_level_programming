#include "lists.h"
/**
  * add_node - add node at the beginning of a list_t list
  * @head: pointer to head
  * @str: string to copy to head->str
  * Return: address of new node (succeeded) || NULL (failed)
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->next = *head;
	temp->str = strdup(str);
	temp->len = strlen(str);
	*head = temp;

	return (temp);
}
