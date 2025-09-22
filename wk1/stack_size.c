#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#define KB 1024UL
#define MB 1048576UL
#define GB 1073741824UL

void make_stack_array(uint64_t);

int main() {
  for (uint64_t sz = 1;; sz *= 2) {
    make_stack_array(sz);

    if (sz >= GB) printf("%ld GB\n", sz / GB);
    else if (sz >= MB) printf("%ld MB\n", sz / MB);
    else if (sz >= KB) printf("%ld KB\n", sz / KB);
    else printf("%ld B\n", sz);
  }
}

void make_stack_array(uint64_t size) {
    int array[size];
}