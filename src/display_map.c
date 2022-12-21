/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** display_map
*/

#include <curses.h>
#include "sokoban.h"

void display_map(char **map)
{
    for (int i = 0; map[i]; i++)
        printw("%s", map[i]);
}
