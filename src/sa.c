/*
** EPITECH PROJECT, 2020
** pushshwap
** File description:
** swap th first to elements of list a
*/

#include "push_swap.h"

void sa(list_t *list)
{
    int tmp = list->a[1];

    list->a[1] = list->a[0];

    list->a[0] = tmp;
    if (list->times == 0)
        my_putstr("sa");
    else
        my_putstr(" sa");
}