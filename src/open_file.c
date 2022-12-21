/*
** EPITECH PROJECT, 2022
** Sokoban_in_terminal
** File description:
** open_file
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include "sokoban.h"

int recup_map(char *filename, soko_t *soko)
{
    int fd;
    int size;
    struct stat file;

    stat(filename, &file);
    soko->buffer = malloc(sizeof(char) * (file.st_size + 1));
    fd = open(filename, O_RDONLY);
    size = file.st_size;
    read(fd, soko->buffer, size);
    soko->buffer[size] = '\0';
    return close(fd);
}
