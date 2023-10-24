#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head's node's data (n)
*/

int pop_listint(listint_t **head)
{
	int firstnode_data;
	listint_t *current, *next;

	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);

	current = *head;
	next = current->next;
	firstnode_data = current->n;
	free(current);
	*head = next;
	return (firstnode_data);
}
