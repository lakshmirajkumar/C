all:murthy

murthy:add.o sub.o mul.o div.o main.o
	gcc add.o sub.o mul.o div.o main.o -o murthy 

add.o:add.c
	gcc -c add.c
sub.o:sub.c
	gcc -c sub.c
mul.o:mul.c
	gcc -c mul.c
div.o:div.c
	gcc -c div.c
main.o:main.c
	gcc -c main.c
	
clean:
	rm *.o murthy

