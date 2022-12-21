/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** main
*/

#include <stdlib.h>
#include "sokoban.h"

int main(int ac, char **av)
{
    soko_t * soko = malloc(sizeof(soko_t));

    if (ac != 2)
        return 84;
    if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        help();
        return 0;
    }
    if (recup_map(av[1], soko) == 84)
        return 84;
    if (map_valid(soko) == 84)
        return 84;
    init_game(soko);
    free_struct(soko);
    return 0;
}
