/*
** EPITECH PROJECT, 2019
** linked_list
** File description:
** linked_list_insert
*/

#include "linked_list_system.h"

void ll_insert(linked_list_t *list, void *element)
{
    ll_element_t *new = NULL;

    new = ll_new(element);
    new->next = list->first;
    if (list->first)
        list->first->prev = new;
    list->first = new;
    list->size += 1;
}

void ll_insert_at(linked_list_t *list, void *element, size_t index)
{
    ll_element_t *new = NULL;
    ll_element_t *temp = list->first;

    if (index > list->size)
        return;
    if (index == 0) {
        ll_insert(list, element);
        return;
    }
    new = ll_new(element);
    for (size_t i = 0; i < index - 1; i++, temp = temp->next);
    new->next = temp->next;
    temp->next = new;
    new->prev = temp;
    if (new->next)
        new->next->prev = new;
    list->size += 1;
}