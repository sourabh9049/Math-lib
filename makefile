project: main.o
	cc main.o -o project
main.o: main.c math.h math2.h
	cc -c main.c
clean:
	rm *.o
