all:calculator
	
calculator: calculator.a
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o calculator calculator.a
	./calculator 5 * 5 | cat -e
	
calculator.a: *.o
	ar -rc calculator.a *.o
*.o: src/*.c
	clang -c src/*.c

install:
	install calculator

uninstall:
	rm calculator
reinstall:
	make uninstall
	make clean
	make
	make install
clean:
	rm *.o *.a	
	
		
