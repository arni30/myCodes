NAME = pathfinder
SRC = src/main.c src/mx_dejkstry_algorithm.c src/mx_find_errors.c src/mx_matrix_dst.c src/mx_separate_string.c src/mx_unique_islands.c src/mx_three_col_matrix.c src/mx_arr_skip_first_string.c
SRCOB = main.o mx_dejkstry_algorithm.o mx_find_errors.o mx_matrix_dst.o mx_separate_string.o mx_unique_islands.o mx_three_col_matrix.o mx_arr_skip_first_string.o
INC = inc/pathfinder.h
OBJ = obj/main.o obj/mx_dejkstry_algorithm.o obj/mx_find_errors.o obj/mx_matrix_dst.o obj/mx_separate_string.o obj/mx_unique_islands.o obj/mx_three_col_matrix.o obj/mx_arr_skip_first_string.o
DIR = obj/
LIBMX = libmx
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean

install:
	@make -C $(LIBMX)
	@mkdir obj
	@clang $(CFLAGS) -c $(SRC)
	@cp $(SRCOB) $(DIR)
	@clang $(CFLAGS) -o $(NAME) $(OBJ) -L./libmx -lmx

uninstall: clean
	@rm -rf $(NAME)
	@make uninstall -C $(LIBMX)

clean:	
	@rm -rf $(SRCOB)
	@rm -rf $(DIR)

reinstall: uninstall all
	@rm -rf $(SRCOB)
	@rm -rf $(DIR)