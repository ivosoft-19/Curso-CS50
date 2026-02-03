CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
LIBS = -lcs50

SOURCES = $(wildcard *.c)
PROGRAMS = $(SOURCES:.c=)

all: $(PROGRAMS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LIBS)

clean:
	rm -f $(PROGRAMS)

.PHONY: all clean
