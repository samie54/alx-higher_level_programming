#include "lists.h"

/*********************************************************
 * Project: 0x00-python-hello_world
 *
 *
 * Date: 05/06/2023
 *
 *
 * Author: Samuel Atiemo
 *
 *
 **********************************************************/

/**
 * check_cycle - linked list containing cycle is checked.
 * @list: linked list checkedd
 *
 * Return: 1; if  list has a cycle, and 0 if it does not.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}

