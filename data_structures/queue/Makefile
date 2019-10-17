queue: main_queue.o queue.o
	gcc -o queue main_queue.o queue.o

main_queue.o: main_queue.c queue.h
	gcc -c main_queue.c

queue.o: queue.c
	gcc -c queue.c

clean:
	rm -f queue main_queue.o queue.o
