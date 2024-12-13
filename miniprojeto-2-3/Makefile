CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: pbuild pview psum psub

poly.o: poly.c poly.h
	$(CC) $(CFLAGS) -c poly.c

pbuild: pbuild.c poly.o
	$(CC) $(CFLAGS) -o pbuild pbuild.c poly.o

pview: pview.c poly.o
	$(CC) $(CFLAGS) -o pview pview.c poly.o

psum: psum.c poly.o
	$(CC) $(CFLAGS) -o psum psum.c poly.o

psub: psub.c poly.o
	$(CC) $(CFLAGS) -o psub psub.c poly.o

clean:
	rm -f *.o pbuild pview psum psub
