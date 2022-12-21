/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** key
*/

#include <curses.h>
#include "sokoban.h"

void restart_map(soko_t *soko, int key)
{
    if (key == ' ')
        soko->map = rc_str_to_word_array(soko->buffer);
}
