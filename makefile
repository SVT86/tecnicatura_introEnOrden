CC = g++

introOrden.exe:	introOrden.o
				${CC} introOrden.o -o introOrden.exe
introOrden.o:	introOrden.c
				${CC} -c introOrden.c -o introOrden.o

clean :
				rm *.exe *.o