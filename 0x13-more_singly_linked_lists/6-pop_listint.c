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
	listint_t *temp, *next;

	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);

	temp = *head;
	next = temp->next;
	firstnode_data = temp->n;
	free(temp);
	*head = next;
	return (firstnode_data);
}
