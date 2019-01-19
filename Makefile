TARGET = tp3
OBJECTS = bandeirola.o guloso.o programacaoDinamica.o forcaBruta.o main.o
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99 -pedantic -g

default: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)
	-rm -f *.o

bandeirola.o: bandeirola.c bandeirola.h
	$(CC) $(CFLAGS) -c bandeirola.c

guloso.o: guloso.c guloso.h
	$(CC) $(CFLAGS) -c guloso.c

programacaoDinamica.o: programacaoDinamica.c programacaoDinamica.h
	$(CC) $(CFLAGS) -c programacaoDinamica.c

forcaBruta.o: forcaBruta.c forcaBruta.h
	$(CC) $(CFLAGS) -c forcaBruta.c

main.o: bandeirola.h guloso.h programacaoDinamica.h forcaBruta.h main.c
	$(CC) $(CFLAGS) -c main.c
	