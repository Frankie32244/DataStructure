binarytree_demo: main.o binarytree.o binarytreefoo.o
		gcc main.o binarytree.o binarytreefoo.o -o binarytree_demo
main.o:main.c
		gcc -c main.c 
binarytree.o:binarytree.h binarytree.c
		gcc -c binarytree.c
sqfoo.o:binarytreefoo.h binarytreefoo.c
		gcc -c binarytreefoo.c
clean:
	rm -f binarytree.o binarytreefoo.o main.o