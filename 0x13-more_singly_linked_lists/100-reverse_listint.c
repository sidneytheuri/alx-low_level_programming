#include "lists.h"
/**
 * reserve_listint - does the reversal
 * @head: its the pointer to an address
 * Return: its a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if  (head == NULL || *head == NULL)
		return (NULL);
	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}
	(*head)->next = behind;

	return (*head);
}

