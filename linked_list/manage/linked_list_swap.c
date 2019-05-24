/*
** EPITECH PROJECT, 2019
** linked_list
** File description:
** linked_list_swap
*/

#include "linked_list_system.h"

void ll_swap_elements(linked_list_t *list, ll_element_t *elem1,
ll_element_t *elem2)
{
    void *temp = NULL;

    temp = elem1->element;
    elem1->element = elem2->element;
    elem2->element = temp;
}

void ll_swap(linked_list_t *list, size_t index1, size_t index2)
{
    ll_element_t *temp1 = list->first;
    ll_element_t *temp2 = list->first;
    size_t i = 0;

    if (index1 >= list->size || index2 >= list->size)
        return;
    for (i = 0; i < index1 && temp1; i++, temp1 = temp1->next);
    if (i != index1)
        return;
    for (i = 0; i < index2 && temp2; i++, temp2 = temp2->next);
    if (i != index2)
        return;
    ll_swap_elements(list, temp1, temp2);
}