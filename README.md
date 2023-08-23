## Data structure implementation developed by C language

#### an example for sequence list:
```linux
# clone the repository to the local folder

$ git clone https://github.com/Frankie32244/DataStructure

$ cd DataStructure/seqlist

# compile

$ make
  # gcc -c main.c 
  # gcc -c seqlist.c
  # gcc -c sqfoo.c
  # gcc main.o seqlist.o sqfoo.o -o seqlist_demo

$ make clean

$ ./seqlist_demo
```

#### Makefile example
```linux
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
```

#### Contact 

visit for the issues or contact with (liw964401@Outlook.com)

#### [referrence](https://blog.csdn.net/lady_killer9/article/details/82695770)# DataStructure
