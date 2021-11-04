/*
** EPITECH PROJECT, 2021
** Star
** File description:
** main
*/

#include "my.h"

static int my_str_isnum(char *str)
{
    for (size_t i = 0; str[i]; i++){
        if (str[i] < 48 || str[i] > 57)
            return 1;
    }return 0;
}

static int check_args(int ac, char **av)
{
    if (ac != 2 || my_str_isnum(av[1]) == 1)
        return 84;
    else if (atoi(av[1]) <= 0)
        return 0;
    return atoi(av[1]);
}

int main(int ac, char **av)
{
    int arg = check_args(ac, av);

    if (arg == 84 || arg == 0)
        return arg;
    else
        star(arg);
    return 0;
}