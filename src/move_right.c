/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** move_right
*/

#include "sokoban.h"

int check_right(int line, int column, char **map)
{
    if (map[line][column] == 'P' && map[line][column + 1] != '#'
    && map[line][column + 1] != 'X') {
        map[line][column] = ' ';
        map[line][column + 1] = 'P';
        return 1;
    } else if (map[line][column] == 'P' && map[line][column + 1] == 'X'
    && map[line][column + 2] != '#' && map[line][column + 2] != 'X') {
        map[line][column] = ' ';
        map[line][column + 1] = 'P';
        map[line][column + 2] = 'X';
        return 1;
    } else
        return 2;
}

void verif_right(char **map, int line)
{
    for (int column = 0; map[line][column]; column++)
        if (check_right(line, column, map) == 1)
            return;
}

void move_right(char **map)
{
    for (int line = 0; map[line]; line++)
        verif_right(map, line);
}
