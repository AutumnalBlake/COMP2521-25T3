#include <stdlib.h>
#include <stdio.h>

int array_sum(int *nums, int n);

int main(int argc, char **argv) {
    int n = argc - 1;
    int *nums = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        nums[i] = atoi(argv[i + 1]);
    }

    int sum = array_sum(nums, n);
    printf("The sum is %d\n", sum);

    printf("The sum is %s\n", sum % 2 == 0 ? "even" : "odd");
}

int array_sum(int *nums, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    return sum;
}