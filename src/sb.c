/*
** EPITECH PROJECT, 2020
** pushshwap
** File description:
** swap th first to elements of list b
*/

#include "push_swap.h"

void sb(list_t *list)
{
    int tmp = 0;

    tmp = list->b[1];

    list->b[1] = list->b[0];

    list->b[0] = tmp;
    if (list->times == 0)
        my_putstr("sb");
    else
        my_putstr(" sb");
}