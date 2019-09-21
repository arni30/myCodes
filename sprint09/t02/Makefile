all: 
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c src/*.c
	ar -rc minilibmx.a *.o
install:
	install minilibmx.a ../

uninstall:
	rm ../minilibmx.a
reinstall:
	make uninstall
	make clean
	make
	make install
clean:
	rm *.o *.a	
	
		
