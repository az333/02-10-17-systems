all: 05_strings.o
	gcc 05_strings.o -o strings.out

05_strings.o: 05_strings.c
	gcc -c 05_strings.c 

clean:
	rm *.o
	rm *~

run: all
	./string.out


