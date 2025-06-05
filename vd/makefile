
myapp: main.o prog1.o prog2.o
	gcc -o myapp main.o prog1.o prog2.o
main.o: main.c a.h
	gcc -c main.c
prog1.o: prog1.c a.h b.h
	gcc -c prog1.c
prog2.o: prog2.c b.h c.h
	gcc -c prog2.c
