stack: main_stack.o stack.o
	gcc -o stack main_stack.o stack.o

main_stack.o: main_stack.c stack.h
	gcc -c main_stack.c

stack.o: stack.c
	gcc -c stack.c

clean:
	rm -f stack main_stack.o stack.o
