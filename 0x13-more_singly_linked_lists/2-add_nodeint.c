#include "lists.h"
/**
 * add_nodeint - adding a brand new node at the beginning of a listint_t list
 * @head: a pointer to the addressof a head
 * @n: it is the integer for the new node
 * Return: print NULL when function fails
 * otherwise print address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}

