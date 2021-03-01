/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** take the first element of l_a and put it at the beggining of l_b
*/

#include "push_swap.h"

void move_b_to_right(list_t *list, int b)
{
    while (b > 0) {
        list->b[b] = list->b[b - 1];
        b--;
    }
}

void move_a_to_left(list_t *list, int a)
{
    while (a < list->size_a - 1) {
        list->a[a] = list->a[a + 1];
        a++;
    }
}

int pb(list_t *list)
{
    int a = 0;
    int b = list->size_b;

    if (list->size_a == 0)
        return (0);
    move_b_to_right(list, b);
    list->size_b += 1;
    list->b[0] = list->a[0];
    move_a_to_left(list, a);
    list->size_a -= 1;
    if (list->times == 0)
        my_putstr("pb");
    else
        my_putstr(" pb");
    return (0);
}