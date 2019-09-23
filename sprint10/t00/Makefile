NAME = read_file
SRC = src/read_from_file.c src/mx_strlen.c src/mx_printchar.c src/main.c
SRCOB = read_from_file.c mx_strlen.c mx_printchar.c main.c
INC = inc/read_from_file.h
INCOB = read_from_file.h
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean

install:
	@cp $(SRC) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCOB) -I $(INCOB)

uninstall: clean
	@rm -rf $(NAME)

clean:
	@rm -rf $(INCOB)	
	@rm -rf $(SRCOB)

reinstall: uninstall clean all