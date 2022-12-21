/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** move_left
*/

#include "sokoban.h"

int check_left(char **map, int i, int j)
{
    if (map[i][j] == 'P' && map[i][j - 1] != '#'
    && map[i][j - 1] != 'X') {
        map[i][j] = ' ';
        map[i][j - 1] = 'P';
        return 1;
    } else if (map[i][j] == 'P' && map[i][j - 1] == 'X'
    && map[i][j - 2] != '#' && map[i][j - 2] != 'X') {
        map[i][j] = ' ';
        map[i][j - 1] = 'P';
        map[i][j - 2] = 'X';
        return 1;
    } else
        return 2;
}

void move_left(char **map)
{
    for (int i = 0; map[i]; i++)
        for (int j = 0; map[i][j]; j++)
            check_left(map,i, j);
}
