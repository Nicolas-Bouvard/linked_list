/*
** EPITECH PROJECT, 2019
** linked_list
** File description:
** linked_list_swap
*/

#include "linked_list_system.h"

typedef struct test_s
{
    int index;
    char *useless;
}test_t;

void ll_swap_system(linked_list_t *list, ll_element_t *elem1,
ll_element_t *elem2)
{
    ll_element_t *temp = elem1->next;

    if (elem1 == list->first)
        list->first = elem2;
    elem1->next = elem2->next;
    elem2->next = temp;
    if (elem1->next)
        elem1->next->prev = elem1;
    if (elem2->next)
        elem2->next->prev = elem2;
    temp = elem1->prev;
    elem1->prev = elem2->prev;
    elem2->prev = temp;
    if (elem1->prev)
        elem1->prev->next = elem1;
    if (elem2->prev)
        elem2->prev->next = elem2;
}

void ll_swap_beside_elem(linked_list_t *list, ll_element_t *left,
ll_element_t *right)
{
    if (left == list->first)
        list->first = right;
    left->next = right->next;
    right->next = left;
    right->prev = left->prev;
    left->prev = right;
    if (left->next)
        left->next->prev = left;
    if (right->prev)
        right->prev->next = right;
}

void ll_swap_elements(linked_list_t *list, ll_element_t *elem1,
ll_element_t *elem2)
{
    if (elem1 == elem2 || !elem1 || !elem2)
        return;
    if (elem1->next == elem2)
        ll_swap_beside_elem(list, elem1, elem2);
    else if (elem1->prev == elem2)
        ll_swap_beside_elem(list, elem2, elem1);
    else
        ll_swap_system(list, elem1, elem2);
}

void ll_swap(linked_list_t *list, size_t index1, size_t index2)
{
    ll_element_t *temp1 = list->first;
    ll_element_t *temp2 = list->first;
    size_t i = 0;

    if (index1 >= list->size || index2 >= list->size || index1 == index2)
        return;
    for (i = 0; i < index1 && temp1; i++, temp1 = temp1->next);
    if (i != index1)
        return;
    for (i = 0; i < index2 && temp2; i++, temp2 = temp2->next);
    if (i != index2)
        return;
    ll_swap_elements(list, temp1, temp2);
}