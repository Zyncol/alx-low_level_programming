#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *f;
	dlistint_t *m;
	unsigned int y;

	f = NULL;
	if (idx == 0)
		f = add_dnodeint(h, n);
	else
	{
		m = *h;
		y = 1;
		if (m != NULL)
			while (m->prev != NULL)
				m = m->prev;
		while (m != NULL)
		{
			if (y == idx)
			{
				if (m->next == NULL)
					f = add_dnodeint_end(h, n);
				else
				{
					f = malloc(sizeof(dlistint_t));
					if (f != NULL)
					{
						f->n = n;
						f->next = m->next;
						f->prev = m;
						m->next->prev = f;
						m->next = f;
					}
				}
				break;
			}
			m = m->next;
			y++;
		}
	}
	return (f);
}
