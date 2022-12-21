/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** verif_lose
*/

#include "sokoban.h"

int verif_around(char **map, int i, int j)
{
    if (map[i - 1][j] == '#' && map[i][j - 1] == '#')
        return 1;
    if (map[i - 1][j] == '#' && map[i][j + 1] == '#')
        return 1;
    if (map[i + 1][j] == '#' && map[i][j - 1] == '#')
        return 1;
    if (map[i + 1][j] == '#' && map[i][j + 1] == '#')
        return 1;
    return 0;
}

int verif_lose(char **map, soko_t *soko)
{
    int box = 0;

    for (int i = 0; map[i]; i++)
        for (int j = 0; map[i][j]; j++)
            (map[i][j] == 'X') ? (box += verif_around(map, i, j)) : 0;
    if (box == soko->box)
        return 0;
    return 1;
}
