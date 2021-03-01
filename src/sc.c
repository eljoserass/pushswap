/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** do sa and sc at the same time
*/

#include "push_swap.h"

void sc(list_t *list)
{
    int tmp_a = list->a[1];
    int tmp_b = list->b[1];

    list->a[1] = list->a[0];

    list->a[0] = tmp_a;

    list->b[1] = list->b[0];

    list->b[0] = tmp_b;

    if (list->times == 0)
        my_putstr("sc");
    else
        my_putstr(" sc");
}