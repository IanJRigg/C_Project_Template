all:
	$(CC) main.c -o scan -Wall -Wextra -Wpedantic

clean:
	$(RM) scan