CC ?= gcc
CFLAGS ?= -Wall -Wextra -pedantic -Werror -Wfatal-errors -g -std=gnu99
LDFLAGS ?= -g

FILES = functii6.o main6.o
HEADERS = header6.h
EXEC = EX6

.PHONY: build
build: $(EXEC)

$(EXEC): $(FILES) $(HEADERS)
	$(CC) $(LDFLAGS) -o $(EXEC) $(FILES)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $<

.PHONY: run
run: $(EXEC)
	./$(EXEC)

.PHONY: clean
clean:
	rm $(FILES) $(EXEC)