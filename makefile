CC = gcc
CFLAGS = -Wall
TARGET = test
OBJFILES = test.o list.o

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

test.o : test.c list.c
	gcc -c test.c list.c

list.o: list.c list.h
	gcc -c list.c 
 
clean:
	rm -f $(OBJFILES) $(TARGET)

