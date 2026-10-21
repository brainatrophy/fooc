build:
	@musl-gcc -static -Wall -Wextra -o main main.c

run: build
	@./main

clean:
	rm -f .prog
	rm -f main
