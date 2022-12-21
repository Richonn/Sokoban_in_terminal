/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** rc_putstr
*/

#include "sokoban.h"

void rc_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        rc_putchar(str[i]);
}
