#include "lists.h"
/**
 * add_nodeint_end - adds new node
 * @head: it is the pointer to address
 * @n : integer of the new node
 * Return: NULL
 *otherwise prints address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)

		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else

	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}

