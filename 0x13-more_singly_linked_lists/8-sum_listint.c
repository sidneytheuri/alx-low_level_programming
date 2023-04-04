#include "lists.h"
/**
 * sum_listint -calculates sum
 * @head: pointer to end
 * Return: empty if 0
 * otherwise return sum of all
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

