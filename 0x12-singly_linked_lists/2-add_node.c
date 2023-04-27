#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds new node the beginning of a list_t list
 * @head: double pointer to the linked list
 * @str: new string to be added
 * Return: address of the new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newn;
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);

	newn->str = strdup(str);
	newn->len = i;
	newn->next = (*head);
	(*head) = newn;

	return (*head);
}
