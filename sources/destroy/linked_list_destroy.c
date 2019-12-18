/*
** EPITECH PROJECT, 2019
** linked_list
** File description:
** linked_list_destroy
*/

#include "linked_list_system.h"

void ll_free_elem(linked_list_t *list, ll_element_t *elem, bool free_elem)
{
    if (!free_elem)
        return;
    if (list->destructor)
        list->destructor(elem->element);
    else
        free(elem->element);
    elem->element = NULL;
}

void ll_destroy(linked_list_t *list, bool free_elem)
{
    while (list->size)
        ll_pop(list, free_elem);
    free(list);
}