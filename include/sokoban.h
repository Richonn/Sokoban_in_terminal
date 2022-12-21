/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** sokoban
*/

#pragma once

typedef struct soko {
    int box;
    char *buffer;
    char **map;
    char **save_map;
} soko_t;

// lib
void rc_putchar(char c);
void rc_putstr(char *str);
int rc_strlen(char *str);
char **rc_str_to_word_array(char *str);
// check_file
int check_file_ext(char *filename, int i);
int check_file(char *filename);
// check_map
int check_valid_map(char *str);
int map_valid(soko_t *soko);
// recup_map
int recup_map(char *filename, soko_t *soko);
// main_game
int init_game(soko_t *soko);
void display_map(char **map);
// key
void restart_map(soko_t *soko, int key);
// move
void check_key_move(soko_t *soko, int key);
void move_up(char **map);
void move_down(char **map);
void move_left(char **map);
void move_right(char **map);
// veirf win
int verif_win(char **map, char **save_map);
// verif lose
int verif_lose(char **map, soko_t *soko);
// save pos place
void save_pos_o(char **map, char **save_map);
// usage
void help(void);
// free
void free_struct(soko_t *soko);
