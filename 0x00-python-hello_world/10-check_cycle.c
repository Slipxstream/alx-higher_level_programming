#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - Function checks if a singly-linked list has a cycle in it.
 * @list: Singly-linked list.
 *
 * Return: If there a cycle, 1. If not, then 0.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *rapid;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	rapid = list->next->next;

	while (slow && rapid && rapid->next)
	{
		if (slow == rapid)
			return (1);

		slow = slow->next;
		rapid = rapid->next->next;
	}

	return (0);
}
