/*
** EPITECH PROJECT, 2020
** pushswp
** File description:
** macro header for the my_ls project
*/

#ifndef PUSH_SWAP_H_
#define PUSH_SWAP_H_

#include <stdlib.h>
#include "lib.h"

#include <stdio.h>

typedef struct list_s {
    int *a;
    int *b;
    int size_a;
    int size_b;
    int times;
} list_t;


list_t *my_init_struct(int ac);
void my_create_list_a(list_t *list, char **av);


void sa(list_t *list);
void sb(list_t *list);
void sc(list_t *list);
int pa(list_t *list);
int pb(list_t *list);



void do_bubble_sort(list_t *list);



void my_print_num_array_a(list_t *list);
void my_print_num_array_b(list_t *list);

#endif /* !PUSH_SWAP_H_ */
