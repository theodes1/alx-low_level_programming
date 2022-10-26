#include "lists.h"

/**
 *  function that prints a listint_t linked list.
 *  Returns: the number of nodes in the list
 *  If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next < head)
		{
			return (1 + print_listint_safe(head->next));
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (1);
		}
	}
	return (0);
}
