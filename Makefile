bin/calc: build/deposit.o build/main.o
	gcc -Wall -Werror -o bin/calc build/deposit.o build/main.o
build/main.o: src/main.c
	gcc -c -o build/main.o src/main.c
build/deposit.o: src/deposit.c
	gcc -c -o build/deposit.o src/deposit.c
clean:
	rm -rf build/*.o bin/*