/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** init struct
*/

#include "push_swap.h"

list_t *my_init_struct(int ac)
{
    list_t *list = malloc(sizeof(list_t));

    if (!list)
        return (NULL);

    list->a = malloc(sizeof(int) * (ac));
    list->b = malloc(sizeof(int) * (ac));

    if (!list->a || !list->b)
        return (NULL);

    list->size_a = (ac -1);
    list->size_b = 0;

    list->times = 0;

    return (list);
}