CC = clang
CFLAGS = -Wall -g -fsanitize=address,leak,undefined


.PHONY: all
all: hanoi list_length list_is_sorted list_filter

hanoi: hanoi.c
	$(CC) $(CFLAGS) hanoi.c -o hanoi

list_length: list_length.c
	$(CC) $(CFLAGS) list_length.c list.c -o list_length
	
list_is_sorted: list_is_sorted.c
	$(CC) $(CFLAGS) list_is_sorted.c list.c -o list_is_sorted

list_filter: list_filter.c
	$(CC) $(CFLAGS) list_filter.c list.c -o list_filter

.PHONY: clean
clean:
	rm hanoi list_length list_is_sorted list_filter
