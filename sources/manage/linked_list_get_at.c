/*
** EPITECH PROJECT, 2020
** NWP_myftp_2019
** File description:
** linked_list_get_at
*/

#include "linked_list_system.h"

void *ll_get_at(linked_list_t *list, size_t index)
{
    ll_element_t *elem = list->first;

    if (index >= list->size)
        return (NULL);
    for (size_t i = 0; i < index; i++)
        elem = elem->next;
    return elem->element;
}