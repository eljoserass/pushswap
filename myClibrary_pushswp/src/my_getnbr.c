/*
** EPITECH PROJECT, 2020
** pushswp
** File description:
** convert a string in a number + my_strlen
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

int my_getnbr(char const *str)
{
    int nb = 0;
    int sign = 1;
    int i = 0;

    if (my_strlen(str) == 1) {
        nb = str[0] - 48;
        return (nb);
    }
    if (str[0] == '-') {
        sign = -1;
        i++;
    }
    while (str[i] != '\0') {
        nb = nb * 10 + (str[i] - 48);
        i++;
    }
    return (nb * sign);
}

