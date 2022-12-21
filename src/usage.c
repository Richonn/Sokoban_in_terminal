/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** usage
*/

#include "sokoban.h"

void help(void)
{
    rc_putstr("USAGE\n\t./my_sokoban map\n");
    rc_putstr("DESCRIPTION\n\t");
    rc_putstr("map file representing the warehouse map,");
    rc_putstr(" containing '#' for walls,\n\t");
    rc_putstr("\t'P' for the player, 'X' for boxes and 'O' for storage");
    rc_putstr(" locations.\n");
}
