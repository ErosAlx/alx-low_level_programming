#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 *
 * @head: pointer to the first node
 *
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
	{
		return;
	}

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
