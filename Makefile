CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = main.c functions.c
OBJ = $(SRC:.c=.o)
EXEC = laptops

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

main.o: main.c functions.h
	$(CC) $(CFLAGS) -c main.c

functions.o: functions.c functions.h
	$(CC) $(CFLAGS) -c functions.c

# Explicit dependency of EXEC on OBJ
$(EXEC): $(OBJ)

clean:
	rm -f $(OBJ) $(EXEC)

