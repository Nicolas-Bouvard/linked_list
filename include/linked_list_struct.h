/*
** EPITECH PROJECT, 2019
** linked_list
** File description:
** linked_list_struct
*/

#ifndef LINKED_LIST_STRUCT_H_
#define LINKED_LIST_STRUCT_H_

#include <unistd.h>
#include <stdbool.h>

typedef struct ll_element_s
{
    void *element;
    struct ll_element_s *next;
    struct ll_element_s *prev;
}ll_element_t;

typedef struct linked_list_s
{
    ll_element_t *first;
    size_t size;
    void (*destructor)(void *);
}linked_list_t;

#endif /* !LINKED_LIST_STRUCT_H_ */