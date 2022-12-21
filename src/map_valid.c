/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** map_valid
*/

#include <stdio.h>
#include "sokoban.h"

int map_valid(soko_t *soko)
{
    if (check_valid_map(soko->buffer) == 84)
        return 84;
    soko->map = rc_str_to_word_array(soko->buffer);
    soko->save_map = rc_str_to_word_array(soko->buffer);
    for (int i = 0; soko->save_map[i]; i++)
        for (int j = 0; soko->save_map[i][j]; j++)
            (soko->save_map[i][j] == 'X') ? soko->box++ : 0;
    return 0;
}
