/*
** EPITECH PROJECT, 2019
** linked_list
** File description:
** linked_list_system
*/

#ifndef LINKEY_LIST_SYSTEM_H_
#define LINKEY_LIST_SYSTEM_H_

#include <stdlib.h>
#include "linked_list_struct.h"

linked_list_t *ll_create(void (*destructor)(void *));

ll_element_t *ll_new(void *element);
void ll_insert(linked_list_t *list, void *element);
void ll_insert_at(linked_list_t *list, void *element, size_t index);
void ll_append(linked_list_t *list, void *element);

void ll_swap(linked_list_t *list, size_t index1, size_t index2);

void ll_pop(linked_list_t *list, bool free_elem);
void ll_pop_at(linked_list_t *list, size_t index, bool free_elem);

void ll_free_elem(linked_list_t *list, ll_element_t *elem, bool free_elem);
void ll_destroy(linked_list_t *list, bool free_elem);

#endif /* !LINKEY_LIST_SYSTEM_H_ */