out.exe: main.o binarytree.o node.o
		gcc main.o binarytree.o node.o -o out.exe

main.o: main.c binarytree.h
		gcc -Wall -c main.c
		
binarytree.o: binarytree.c binarytree.h node.h
		gcc -Wall -c binarytree.c
		
node.o: node.c node.h
		gcc -Wall -c node.c

clean:
		rm *.o out.exe
		ls