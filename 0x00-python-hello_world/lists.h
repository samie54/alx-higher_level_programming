#ifndef LISTS_H_
#define LISTS_H_

/*********************************************************
 * Project: 
 *
 *
 * Date: 05/06/2023
 *
 *
 * Author: Samuel Atiemo
 *    
 *
 **********************************************************/

#include <stdlib.h>
int check_cycle(listint_t *list);
size_t print_listint(const listint_t *h);
void free_listint(listint_t *head);
listint_t *add_nodeint(listint_t **head, const int n);

/*Struct commands*/

/**
 * struct listint_s - singly linkedd list.
 * @n: integerr to be pointed
 * @next: pointer to next node
 *
 * Des: singgly linkedd listt structuree.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#endif

