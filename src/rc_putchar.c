/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** rc_putchar
*/

#include <unistd.h>
#include "sokoban.h"

void rc_putchar(char c)
{
    write(1, &c, 1);
}
