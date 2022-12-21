/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** check_key_move
*/

#include <curses.h>
#include <stdio.h>
#include "sokoban.h"

void check_key_move(soko_t *soko, int key)
{
    if (key == KEY_UP)
        move_up(soko->map);
    if (key == KEY_DOWN)
        move_down(soko->map);
    if (key == KEY_LEFT)
        move_left(soko->map);
    if (key == KEY_RIGHT)
        move_right(soko->map);
    if (key == 'o')
        move_up(soko->map);
    if (key == 'l')
        move_down(soko->map);
    if (key == 'k')
        move_left(soko->map);
    if (key == 'm')
        move_right(soko->map);
}
