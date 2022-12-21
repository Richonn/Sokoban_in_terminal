##
## EPITECH PROJECT, 2022
## Sokoban_in_terminal
## File description:
## Makefile
##

TARGET_NAME	=	my_sokoban
SOURCE_DIR	=	src
OBJECT_DIR	=	objects
HEADER_DIR	=	include

vpath %.c $(SOURCE_DIR)

SOURCES_FILES =	src/check_key_move.c	\
				src/check_valid_map.c	\
				src/display_map.c	\
				src/free_struct.c	\
				src/init_game.c	\
				src/key.c	\
				src/main.c	\
				src/map_valid.c	\
				src/move_down.c	\
				src/move_left.c	\
				src/move_right.c	\
				src/move_up.c	\
				src/open_file.c	\
				src/rc_putchar.c	\
				src/rc_putstr.c	\
				src/rc_str_to_word_array.c	\
				src/rc_strlen.c	\
				src/save_pos_place.c	\
				src/usage.c	\
				src/verif_lose.c	\
				src/verif_win.c

OBJECTS	=	$(patsubst src/%.c, $(OBJECT_DIR)/%.o, $(SOURCES_FILES))

CC =	gcc

CFLAGS =	-I$(HEADER_DIR) \
			-W -Wall -Wextra -Werror \
			-Wno-unused-variable \
			-Wno-unused-parameter \
			-Wno-unused-but-set-variable \
			-Wno-unused-but-set-parameter \
			-g3

LIBS =	-lcurses

all:	directories $(TARGET_NAME)

directories: | $(SOURCE_DIR) $(OBJECT_DIR)

clean:
	@$(RM) -rf ./$(OBJECT_DIR)/*.o

fclean: clean
	@$(RM) -rf ./$(OBJECT_DIR)
	@$(RM) -f ./$(TARGET_NAME)

re: fclean all
	@echo -e "\033[0;36m [Done] \033[0mredoing"

.PHONY: all clean fclean re unit_tests run_tests gcovr

$(TARGET_NAME): $(OBJECTS)
	@$(CC) -o $(TARGET_NAME) $^ $(LIBS)
	@echo -e "🌑\e[35m -- BUILD SUCCESSFUL --\e[0m"

$(OBJECT_DIR):
	@mkdir -p $@

$(SOURCE_DIR):
	@echo "🌕\e[31m -- Error: source folder not found !\e[0m"

$(OBJECT_DIR)/%.o : %.c
	@$(CC) -c -o $@ $< $(CFLAGS)
	@echo -e "🌗\e[35m -- $@ successfully compiled --\e[0m"
