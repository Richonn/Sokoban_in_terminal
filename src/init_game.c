/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** init_game
*/

#include <stdlib.h>
#include <curses.h>
#include "sokoban.h"

void main_game(soko_t *soko, int key)
{
    check_key_move(soko, key);
    save_pos_o(soko->map, soko->save_map);
    clear();
    display_map(soko->map);
}

int init_game(soko_t *soko)
{
    int key = 0;
    WINDOW *main_win = initscr();

    keypad(main_win, TRUE);
    display_map(soko->map);
    while ((key = getch()) != 'q') {
        restart_map(soko, key);
        main_game(soko, key);
        refresh();
        if (verif_lose(soko->map, soko) == 0) {
            endwin();
            exit(1);
        }
        if (verif_win(soko->map, soko->save_map) == 0) {
            endwin();
            exit(0);
        }
    }
    endwin();
    return 0;
}
