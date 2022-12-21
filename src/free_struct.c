/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** free_struct
*/

#include <stdlib.h>
#include "sokoban.h"

void free_struct(soko_t *soko)
{
    for (int i = 0; soko->map; i++)
        free(soko->map[i]);
    for (int i = 0; soko->save_map; i++)
        free(soko->save_map[i]);
    free(soko->buffer);
    free(soko);
}
