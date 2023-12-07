#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning
* @head: head of the list
* @n: value of the element
* Return: the address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *f;
dlistint_t *h;
f = malloc(sizeof(dlistint_t));
if (f == NULL)
	return (NULL);
f->n = n;
f->prev = NULL;
h = *head;
if (h != NULL)
{
	while (h->prev != NULL)
		h = h->prev;
}
f->next = h;
if (h != NULL)
	h->prev = f;
*head = f;
return (f);
}
