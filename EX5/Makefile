CC ?= gcc
CFLAGS ?= -Wall -Wextra -pedantic -Werror -Wfatal-errors -g -std=gnu99
LDFLAGS ?= -g

FILES = functii5.o main5.o
HEADERS = header5.h
EXEC = EX5

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