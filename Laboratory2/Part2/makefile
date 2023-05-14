all: main
main: main.o libmylib.so
	gcc -o main main.o -L./ -lmylib
main.o: main.c
	gcc -c main.c
libmylib.so: mylib.o
	gcc -shared -o libmylib.so mylib.o
mylib.o: mylib.c
	gcc -c -fPIC mylib.c
clean:
	rm -f *.o *.so main
