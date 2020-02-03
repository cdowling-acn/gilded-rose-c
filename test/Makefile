PROGNAME=gr-test
OBJS=$(patsubst %.c, %.o, $(wildcard *.c))

CFLAGS=-I.. -I../unity -I. -std=c99 -Wall -Werror
VPATH=..

LIBS=-L../unity -lunity
SUT=GildedRose.o

all: $(PROGNAME)
	./$(PROGNAME)

$(PROGNAME): $(OBJS) $(SUT)
	$(CC) -o $@ $^ $(LIBS)

clean:
	rm -f *.o
	rm -f $(PROGNAME)
