#include "lists.h"
/**
* sum_dlistint - returns the sum of all the data
* @head: its head of the list
* Return: the sum of the data
*/
int sum_dlistint(dlistint_t *head)
{
int total;
total = 0;
if (head != NULL)
{
	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
}
return (total);
}
