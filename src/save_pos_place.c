/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** save_pos_place
*/

#include "sokoban.h"

void save_pos_o(char **map, char **save_map)
{
    for (int i = 0; map[i]; i++)
        for (int j = 0; map[i][j]; j++)
            (save_map[i][j] == 'O' && map[i][j] == ' ') ?
            (map[i][j] = 'O') : 0;
}
