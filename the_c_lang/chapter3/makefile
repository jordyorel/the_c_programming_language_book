CC = gcc
CFLAGS = -Wall

TARGET = shellsort

all: $(TARGET)

$(TARGET): shellsort.o
	$(CC) $(CFLAGS) -o $(TARGET) shellsort.o

shellsort.o: shellsort.c
	$(CC) $(CFLAGS) -c shellsort.c

.PHONY: clean
clean:
	rm -f $(TARGET) *.o
