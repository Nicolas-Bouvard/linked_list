/*
** EPITECH PROJECT, 2019
** linked_list
** File description:
** linked_list_create
*/

#include "linked_list_system.h"

linked_list_t *ll_create(void (*destructor)(void *))
{
    linked_list_t *res = malloc(sizeof(linked_list_t));

    if (!res)
        return (NULL);
    res->destructor = destructor;
    res->first = NULL;
    res->size = 0;
    return (res);
}