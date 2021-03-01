/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** create list
*/

#include "push_swap.h"

void my_create_list_a(list_t *list, char **av)
{
    int i = 0;

    while (i < list->size_a) {
        list->a[i] = my_getnbr(av[i + 1]);
        i++;
    }
}