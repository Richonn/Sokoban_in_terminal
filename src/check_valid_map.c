/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** check_valid_map
*/

#include <unistd.h>
#include "sokoban.h"

int check_char_map(char *str, int i)
{
    if (str[i] != ' ' && str[i] != 'X' && str[i] != 'O' && str[i] != 'P' &&
    str[i] != '\n' && str[i] != '#' && str[i] != '\0')
        return 84;
    return 0;
}

int check_valid_map(char *str)
{
    int box = 0;
    int place = 0;
    int player = 0;

    if (str[0] == '\0')
        return 84;
    for (int i = 0; str[i] != '\0'; i++) {
        if (check_char_map(str, i) == 84)
            return 84;
        switch (str[i]) {
        case 'P' : player++; break;
        case 'O' : place++; break;
        case 'X' : box++; break;
        }
    }
    if ((box != place) || (player != 1))
        return 84;
    return 0;
}
