flags=-O2 -Wall -std=c23 -Ilib -Iinclude
ldflags=-Llib -lbu -Wl,-rpath,'$$ORIGIN/lib'

.PHONY: all clean

all: clean kping

kping: kping.o
	cc $(flags) $^ -o $@ $(ldflags)

kping.o: kping.c ./lib/kping.h
	cc $(flags) -c $<

clean:
	rm -f *.o kping
