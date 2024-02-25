CC = gcc
CFLAGS = -Wall

TARGET = binary

all: $(TARGET)

$(TARGET): binary.o
	$(CC) $(CFLAGS) -o $(TARGET) binarySearch.o

binary.o: binarySearch.c
	$(CC) $(CFLAGS) -c binarySearch.c

.PHONY: clean
clean:
	rm -f $(TARGET) *.o
