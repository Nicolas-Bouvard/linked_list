/*
** EPITECH PROJECT, 2019
** linked_list
** File description:
** linked_list_append
*/

#include "linked_list_system.h"

ll_element_t *ll_new(void *element)
{
    ll_element_t *res = malloc(sizeof(ll_element_t));

    res->next = NULL;
    res->prev = NULL;
    res->element = element;
    return (res);
}

void ll_append(linked_list_t *list, void *element)
{
    ll_insert_at(list, element, list->size);
}