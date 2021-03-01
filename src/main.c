/*
** EPITECH PROJECT, 2020
** pushswp
** File description:
** THE MAIN
*/

#include "push_swap.h"

int my_do_algo(int ac, char **av)
{
    list_t *list;

    if (ac == 1)
        return (84);
    list = my_init_struct(ac);
    if (!list)
        return (84);
    my_create_list_a(list, av);
    do_bubble_sort(list);
    my_putchar('\n');
    free(list->a);
    free(list->b);
    free(list);
    return (0);
}

int main(int ac, char **av)
{
    if (my_do_algo(ac, av) == 84)
        return (84);
    return (0);
}