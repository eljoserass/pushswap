/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** take the first element of l_b and put it in the begining of l_a
** the size arr count until the first NULL
*/

#include "push_swap.h"

void move_a_to_right(list_t *list, int a)
{
    while (a > 0) {
        list->a[a] = list->a[a - 1];
        a--;
    }
}

void move_b_to_left(list_t *list, int b)
{
    while (b < list->size_b - 1) {
        list->b[b] = list->b[b + 1];
        b++;
    }
}

int pa(list_t *list)
{
    int a = list->size_a;
    int b = 0;

    if (list->size_b == 0)
        return (0);
    move_a_to_right(list, a);
    list->size_a += 1;
    list->a[0] = list->b[0];
    move_b_to_left(list, b);
    list->size_b -= 1;
    if (list->times == 0)
        my_putstr("pa");
    else
        my_putstr(" pa");
    return (0);
}