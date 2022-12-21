/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** rc_strlen
*/

#include "sokoban.h"

int rc_strlen(char *str)
{
    int i = 0;

    for (; str[i]; i++);
    return i;
}
