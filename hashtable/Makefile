hash_demo: main.o hash.o hashfoo.o
		gcc main.o hash.o hashfoo.o -o hash_demo
main.o:main.c
		gcc -c main.c 
hash.o:hash.h hash.c
		gcc -c hash.c
hashfoo.o:hashfoo.h hashfoo.c
		gcc -c hashfoo.c
clean:
	rm -f hash.o hashfoo.o main.o