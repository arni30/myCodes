NAME = libmx.a
SRC = src/mx_printchar.c  
SRCOB = mx_printchar.o 
INC = inc/libmx.h
OBJ = obj/mx_printchar.o
DIR = obj/
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean

install:
	@mkdir obj
	@clang $(CFLAGS) -c $(SRC) 
	@cp $(SRCOB) $(DIR)
	ar -rc libmx.a  $(INC) $(OBJ)

uninstall: clean
	@rm -rf $(NAME)

clean:	
	@rm -rf $(SRCOB)
	@rm -rf $(DIR)

reinstall: uninstall clean all
