#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds new node the end of a list_t list
 * @head: double pointer to the linked list
 * @str: new string to be added
 * Return: address of the new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn;
	list_t *temp = *head;
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);

	newn->str = strdup(str);
	newn->len = i;
	newn->next = NULL;

	if (*head == NULL)
	{
		(*head) = newn;
		return (newn);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newn;

	return (newn);
}
