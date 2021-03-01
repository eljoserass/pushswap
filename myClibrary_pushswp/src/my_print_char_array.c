/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** print a array of strings
*/

#include "lib.h"

void my_print_char_array(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        my_putstr(array[i]);
        i++;
    }
    my_putchar('\n');
}