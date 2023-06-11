#ifndef LISTS_H_
#define LISTS_H_

#include <stddef.h>

/**
 * struct listint_s - singlyy linked listt.
 * @n: integerr.
 * @next: pointts to next node.
 *
 * Description: singly linkedd listt node structure.
 * for 0x03-python-data_structures project.
 */
int is_palindrome(listint_t **head);

listint_t *add_nodeint_end(listint_t **head, const int n);
size_t print_listint(const listint_t *h);
void free_listint(listint_t *head);

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;


#endif /* LISTS_H_ */
