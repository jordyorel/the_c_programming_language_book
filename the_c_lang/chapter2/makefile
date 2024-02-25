CC = gcc
CFLAGS = -Wall

TARGET = lower

all: $(TARGET)

$(TARGET): lower.o
	$(CC) $(CFLAGS) -o $(TARGET) lower.o

bitcount1.o: lower.c
	$(CC) $(CFLAGS) -c lower.c

.PHONY: clean
clean:
	rm -f $(TARGET) *.o
