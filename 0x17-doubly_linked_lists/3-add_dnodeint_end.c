#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end
* @head: head of the list
* @n: value of the element
* Return: the address of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *oh;
dlistint_t *f;
f = malloc(sizeof(dlistint_t));
if (f == NULL)
	return (NULL);
f->n = n;
f->next = NULL;
oh = *head;
if (oh != NULL)
{
	while (oh->next != NULL)
		oh = oh->next;
	oh->next = f;
}
else
{
	*head = f;
}
f->prev = oh;
return (f);
}
