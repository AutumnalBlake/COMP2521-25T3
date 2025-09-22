#include <stdlib.h>
#include <stdio.h>

void solveHanoi(int n, int from, int to, int other);

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    printf("Solving Tower of Hanoi with %d disks\n", n);
    solveHanoi(n, 1, 3, 2);
}

void solveHanoi(int n, int from, int to, int other) {

}