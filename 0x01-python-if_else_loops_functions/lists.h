#ifndef LISTS_H_
#define LISTS_H_

/*********************************************************
 * Project: 0x01. Python - if/else, loops, functions
 *
 *
 * Date: 06/06/2023
 *
 *
 * Author: Samuel Atiemo
 *
 *
 **********************************************************/

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

listint_t *insert_node(listint_t **head, int number);

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
void free_listint(listint_t *head);
listint_t *add_nodeint_end(listint_t **head, const int n);


#endif /* LISTS_H_ */


