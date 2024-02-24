CC = gcc
CFLAGS = -Wall

TARGET = exercise2

all: $(TARGET)

$(TARGET): exercise2.o
	$(CC) $(CFLAGS) -o $(TARGET) exercise2-5.o

exercise2.o: exercise2-5.c
	$(CC) $(CFLAGS) -c exercise2-5.c

.PHONY: clean
clean:
	rm -f $(TARGET) *.o
