/*
** EPITECH PROJECT, 2019
** linked_list
** File description:
** linked_list
*/

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

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

//destructor = NULL -> free
linked_list_t *ll_create(void (*destructor)(void *));

//destroy linked_list structure and free elems if free_elem is set to true
void ll_destroy(linked_list_t *list, bool free_elem);

//add an element at the end of the linked list
void ll_append(linked_list_t *list, void *element);

//insert an element at the index asked
void ll_insert_at(linked_list_t *list, void *element, size_t index);

//insert an element at the beginning of the list
void ll_insert(linked_list_t *list, void *element);

//swap two elements at the index asked
void ll_swap(linked_list_t *list, size_t index1, size_t index2);

//swap two element depending on the element
void ll_swap_elements(linked_list_t *list, ll_element_t *elem1,
ll_element_t *elem2);

//pop the element sent and return the index of this element.
//if the function don't find the element, it return -1
size_t ll_pop_element(linked_list_t *list, void *element, bool free_elem);

//pop an element at the index asked
void ll_pop_at(linked_list_t *list, size_t index, bool free_elem);

//pop the last element of the list
void ll_pop(linked_list_t *list, bool free_elem);

//Return the element at the given index
void *ll_get_at(linked_list_t *list, size_t index);

#endif /* !LINKED_LIST_H_ */