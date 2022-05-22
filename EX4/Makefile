CC ?= gcc
CFLAGS ?= -Wall -Wextra -pedantic -Werror -Wfatal-errors -g -std=gnu99
LDFLAGS ?= -g

FILES = functii4.o main4.o
HEADERS = header4.h
EXEC = EX4

.PHONY: build
build: $(EXEC)

$(EXEC): $(FILES) $(HEADERS)
	$(CC) $(LDFLAGS) -o $(EXEC) $(FILES)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $<

.PHONY: run
run: $(EXEC)
	./$(EXEC) > permutari.txt

.PHONY: clean
clean:
	rm $(FILES) $(EXEC)