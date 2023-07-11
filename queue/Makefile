queue_demo: main.o queue.o 
		gcc main.o queue.o -o queue_demo
main.o:main.c
		gcc -c main.c 
queue.o:queue.h queue.c
		gcc -c queue.c
clean:
	rm -f queue.o main.o