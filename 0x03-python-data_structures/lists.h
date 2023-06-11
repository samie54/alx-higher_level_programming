#ifndef LISTS_H_
#define LISTS_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singlyy linked listt.
 * @n: integerr.
 * @next: pointts to next node.
 *
 * Description: singly linkedd listt node structure.
 * for 0x03-python-data_structures project.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
int is_palindrome(listint_t **head);


#endif /* LISTS_H_ */
