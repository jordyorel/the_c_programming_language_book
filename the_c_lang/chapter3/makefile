CC = gcc
CFLAGS = -Wall

TARGET = exercise3

all: $(TARGET)

$(TARGET): exercise3.o
	$(CC) $(CFLAGS) -o $(TARGET) exercise3-2.o

exercise3.o: exercise3-2.c
	$(CC) $(CFLAGS) -c exercise3-2.c

.PHONY: clean
clean:
	rm -f $(TARGET) *.o
