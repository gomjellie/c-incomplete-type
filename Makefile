
CC = gcc
SRCS = animal.c cat.c dog.c
OBJS = $(SRCS:.c=.o)

OPTS = -std=c11 -Wall -I.

%.o: %.c
	$(CC) $(OPTS) -c $< -o $@

build: $(OBJS)
	$(CC) $(OPTS) -o run main.c $(OBJS)
	@echo "./run 으로 실행시키세요"

clean:
	rm -f *.o run
