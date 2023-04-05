#include "lists.h"
/**
 * reserve_listint - does the reversal
 * @head: its the pointer to an address
 * Return: its a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *bhead, *behind;

	if  (head == NULL || *head == NULL)
		return (NULL);
	behind = NULL;

	while ((*head)->next != NULL)
	{
		bhead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = bhead;
	}
	(*head)->next = behind;
	return (*head);
}

