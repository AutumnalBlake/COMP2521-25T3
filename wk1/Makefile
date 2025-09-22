CC = clang
CFLAGS = -Wall -g -fsanitize=address,leak,undefined


.PHONY: all
all: array_sum list_sum list_delete stack_size heap_size

array_sum: array_sum.c
	$(CC) $(CFLAGS) array_sum.c -o array_sum

list_sum: list_sum.c
	$(CC) $(CFLAGS) list_sum.c -o list_sum

list_delete: list_delete.c
	$(CC) $(CFLAGS) list_delete.c -o list_delete

stack_size: stack_size.c
	gcc -O0 stack_size.c -o stack_size

heap_size: heap_size.c
	gcc -O0 heap_size.c -o heap_size

.PHONY: clean
clean:
	rm array_sum list_sum list_delete stack_size heap_size
