singly: main.o singly_linked_list.o
	gcc -o singly main.o singly_linked_list.o

main.o: main.c singly_linked_list.h
	gcc -c main.c

singly.o: singly_linked_list.c singly_linked_list.h
	gcc -c singly_linked_list.c

clean:
	rm -f singly main.o singly_linked_list.o
