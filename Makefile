lab2:lab2.o value.o
	g++ -o lab2 lab2.o value.o

value.o:lab2.cpp value.h
	g++ -c lab2.cpp

filein.o:value.cpp value.h
	g++ -c value.cpp

clean:
 	rm lab2*.o
