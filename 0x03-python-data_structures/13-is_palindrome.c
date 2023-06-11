#include "lists.h"

#include <stdlib.h>
#include <stddef.h>

/**
 * is_palindrome - checks if singly linked listt is a palindrome.
 * @head: head of the linkedd list.
 * Return: 0 if not a palindrome; and 1 if palindrome.
 */
int is_palindrome(listint_t **head)
{
	int s = 0, i = 0;
	int arr[2048];

	if (*head == NULL || (*head)->next == NULL)
		return (1);
	while (*head != NULL)
	{
		arr[s] = (*head)->n;
		*head = (*head)->next;
		s++;
	}

	while (s >= i)
	{
		if (arr[i] != arr[s - 1])
			return (0);
		s--;
		i++;
	}
	return (1);
}
