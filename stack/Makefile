stack_demo: main.o stack.o stackfoo.o
		gcc main.o stack.o stackfoo.o -o stack_demo
main.o:main.c
		gcc -c main.c 
stack.o:stack.h stack.c
		gcc -c stack.c
stackfoo.o:stackfoo.h stackfoo.c
		gcc -c stackfoo.c
clean:
	rm -f stack.o stackfoo.o main.o