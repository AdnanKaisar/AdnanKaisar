#include <stdio.h>

int main() {
    int count = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
            count++;
        }
    }
    printf("Number of integers between 1 and 100 not divisible by 2, 3, or 5: %d\n", count);
    return 0;
}
