#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#define KB 1024UL
#define MB 1048576UL
#define GB 1073741824UL

int main() {
  for (uint64_t sz = 1;; sz *= 2) {
    char *arr = malloc(sz);

    if (arr == NULL) {
        printf("Malloc failed\n");
        exit(1);
    }
    free(arr);

    if (sz >= GB) printf("%ld GB\n", sz / GB);
    else if (sz >= MB) printf("%ld MB\n", sz / MB);
    else if (sz >= KB) printf("%ld KB\n", sz / KB);
    else printf("%ld B\n", sz);
  }
}