/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** verif_win
*/

#include "sokoban.h"

int verif_win(char **map, char **save_map)
{
    int k = 0;

    for (int i = 0; map[i]; i++)
        for (int j = 0; map[i][j]; j++)
            (save_map[i][j] == 'O' && map[i][j] != 'X') ? (k++) : 0;
    return k;
}
