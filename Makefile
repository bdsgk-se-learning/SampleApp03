CC=gcc
CFLAGS=-Wall

sampleapp: main.o buffer_overrun.o memory_leak.o file_leak.o
	$(CC) $(CFLAGS) -o sampleapp main.o buffer_overrun.o memory_leak.o file_leak.o

main.o: main.c buffer_overrun.h memory_leak.h file_leak.h
	$(CC) $(CFLAGS) -c main.c

buffer_overrun.o: buffer_overrun.c buffer_overrun.h
	$(CC) $(CFLAGS) -c buffer_overrun.c

memory_leak.o: memory_leak.c memory_leak.h
	$(CC) $(CFLAGS) -c memory_leak.c

file_leak.o: file_leak.c file_leak.h
	$(CC) $(CFLAGS) -c file_leak.c

clean:
	rm -f sampleapp *.o
