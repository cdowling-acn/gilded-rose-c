PROGRAM=GildedRoseTextTests
OBJS=$(patsubst %.c, %.o, $(wildcard *.c))
.PHONY: unity test clean all

all : test $(PROGRAM)
	./$(PROGRAM) > testrun.txt

$(PROGRAM) : $(OBJS)
	$(CC) $^ -o $@

unity:
	$(MAKE) -C unity

test: unity
	$(MAKE) -C test

clean :
	rm -f $(PROGRAM) *.o *~
	rm -f testrun.txt
	$(MAKE) -C unity clean
	$(MAKE) -C test clean