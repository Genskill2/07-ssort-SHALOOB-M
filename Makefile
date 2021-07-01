.PHONY: clean test

ssort: swap.c main.c
	gcc -Wall -g swap.c main.c -o ssort -lcs50 -lm 

test: ssort
	./ssort
clean: 
	rm -f swap
