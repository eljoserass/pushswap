/*
** EPITECH PROJECT, 2020
** pushwap
** File description:
** do bubble sort with pushswap rules
*/

#include "push_swap.h"

int check_la_isordered(list_t *list)
{
    int a = 0;
    while (a < (list->size_a - 1)) {
        if (list->a[a] > list->a[a + 1]){
            return (0);
        }
        a++;
    }
    return (1);
}

void put_in_b(list_t *list)
{
    while (list->size_a != 1) {
        if (list->a[0] > list->a[1]) {
                sa(list);
                list->times++;
        }
        pb(list);
        list->times++;
    }
}

void put_in_a(list_t *list)
{
    while (list->size_b != 1) {
        if (list->b[0] < list->b[1]) {
            sb(list);
            list->times++;
        }
        pa(list);
        list->times++;
    }
}

void do_bubble_sort(list_t *list)
{
    while (check_la_isordered(list) != 1) {
        put_in_b(list);
        pb(list);
        list->times++;
        put_in_a(list);
        pa(list);
        list->times++;
    }
}