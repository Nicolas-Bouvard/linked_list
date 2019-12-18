/*
** EPITECH PROJECT, 2019
** linked_list
** File description:
** pop
*/

#include "linked_list_system.h"

void ll_pop_at(linked_list_t *list, size_t index, bool free_elem)
{
    ll_element_t *temp = list->first;

    if (index >= list->size)
        return;
    for (size_t i = 0; i < index; i++, temp = temp->next);
    ll_free_elem(list, temp, free_elem);
    if (temp->prev)
        temp->prev->next = temp->next;
    if (temp->next)
        temp->next->prev = temp->prev;
    if (list->first == temp)
        list->first = temp->next;
    free(temp);
    list->size -= 1;
}

void ll_pop(linked_list_t *list, bool free_elem)
{
    ll_pop_at(list, list->size - 1, free_elem);
}

size_t ll_pop_element(linked_list_t *list, void *element, bool free_elem)
{
    ll_element_t *temp = list->first;
    size_t i = 0;

    while (temp) {
        if (temp->element == element) {
            ll_pop_at(list, i, free_elem);
            return (i);
        }
        i++;
        temp = temp->next;
    }
    return (-1);
}