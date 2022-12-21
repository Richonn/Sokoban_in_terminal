/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** rc_str_to_word_array
*/

#include <unistd.h>
#include <stdlib.h>
#include "sokoban.h"

int nb_line(char *str)
{
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            j++;
    }
    j++;
    return j;
}

int line_size(char *str)
{
    int i = 0;

    while (str[i] != '\n')
        i++;
    i++;
    return i;
}

char **rc_str_to_word_array(char *str)
{
    char **tab = malloc(sizeof(char *) * nb_line(str) + 1);
    int index = 0;
    int column = 0;
    int stock_clm = 0;

    for (int line = 0; line <= nb_line(str); line++, column++) {
        stock_clm = column;
        for (; str[column] != '\n' && str[column] != '\0'; column++);
        tab[line] = malloc(sizeof(char) * column - stock_clm + 1);
        for (index = 0; stock_clm <= column; stock_clm++, index++)
            tab[line][index] = str[stock_clm];
        tab[line][index + 1] = '\n';
    }
    tab[nb_line(str) + 1] = NULL;
    return tab;
}
