all: mymaths mymathd mains maind

mymaths: libmyMath.a

libmyMath.a: basicMath.o power.o myMath.h
		ar -rcs libmyMath.a basicMath.o power.o
		
mymathd: libmyMath.so
libmyMath.so: basicMath.o power.o myMath.h
		gcc -shared -o libmyMath.so basicMath.o power.o

mains: main.o libmyMath.a
	gcc -Wall -o mains main.o libmyMath.a
	
maind: main.o libmyMath.so
	gcc -Wall -o maind main.o ./libmyMath.so
			
main.o: main.c
	gcc -Wall -c main.c
	
basicMath.o: basicMath.c myMath.h
		gcc -Wall -c basicMath.c

power.o: power.c myMath.h
	gcc -Wall -c power.c 

.PHONY: clean all mymaths mymathd

clean: rm -f *.o *.a *.so mains maind
