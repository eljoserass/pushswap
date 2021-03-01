/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** print a number array
*/

#include "push_swap.h"

void my_print_num_array_a(list_t *list)
{
    int i = 0;
    my_putstr("a: ");
    my_putchar('|');
    while (i < list->size_a) {
        my_put_nbr(list->a[i]);
        my_putchar('|');
        i++;
    }
    my_putchar('\n');
}

void my_print_num_array_b(list_t *list)
{
    int i = 0;
    my_putstr("b: ");
    my_putchar('|');
    while (i < list->size_b) {
        my_put_nbr(list->b[i]);
        my_putchar('|');
        i++;
    }
    my_putchar('\n');
}