/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** move_down
*/

#include "sokoban.h"

int check_down(char **map, int i, int j)
{
    if (map[i][j] == 'P' && map[i + 1][j] != '#'
    && map[i + 1][j] != 'X') {
        map[i][j] = ' ';
        map[i + 1][j] = 'P';
        return 1;
    } else if (map[i][j] == 'P' && map[i + 1][j] == 'X'
    && map[i + 2][j] != '#' && map[i + 2][j] != 'X') {
        map[i][j] = ' ';
        map[i + 1][j] = 'P';
        map[i + 2][j] = 'X';
        return 1;
    } else
        return 2;
}

void move_down(char **map)
{
    for (int i = 0; map[i]; i++)
        for (int j = 0; map[i][j]; j++)
            (check_down(map, i, j) == 1) ? (j++, i++) : 0;
}
