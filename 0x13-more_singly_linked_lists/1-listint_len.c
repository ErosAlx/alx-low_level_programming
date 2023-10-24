#include "lists.h"

/**
 * listint_len - a function that returns the number of elements.
 *
 * @h: pointer to the first node
 *
 * Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t n_elements = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		n_elements++;
	}
	return (n_elements);
}
