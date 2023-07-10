seqlist_demo: main.o seqlist.o sqfoo.o
		gcc main.o seqlist.o sqfoo.o -o seqlist_demo
main.o:main.c
		gcc -c main.c 
seqlist.o:seqlist.h seqlist.c
		gcc -c seqlist.c
sqfoo.o:sqfoo.h sqfoo.c
		gcc -c sqfoo.c
clean:
	rm -f seqlist.o sqfoo.o main.o