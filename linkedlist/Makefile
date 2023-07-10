linkedlist_demo: main.o linkedlist.o linkedlistfoo.o
		gcc main.o linkedlist.o linkedlistfoo.o -o linkedlist_demo
main.o:main.c
		gcc -c main.c 
linkedlist.o:linkedlist.h linkedlist.c
		gcc -c linkedlist.c
linkedlistfoo.o:linkedlistfoo.h linkedlistfoo.c
		gcc -c linkedlistfoo.c
clean:
	rm -f linkedlist.o linkedlistfoo.o main.o