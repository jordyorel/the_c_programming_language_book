CC = gcc
CFLAGS = -Wall

TARGET = exercise2

all: $(TARGET)

$(TARGET): exercise2-7.o
	$(CC) $(CFLAGS) -o $(TARGET) exercise2-7.o

bitwise.o: exercise2-7.c
	$(CC) $(CFLAGS) -c exercise6-7.c

.PHONY: clean
clean:
	rm -f $(TARGET) *.o
