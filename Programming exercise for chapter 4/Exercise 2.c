#include <stdio.h>

#define MAX 10
int a[MAX];  // Global array

// Bubble sort function
void bubble_sort() {
    int x, y, t;
    for (x = 0; x < MAX - 1; x++) {
        for (y = 0; y < MAX - x - 1; y++) {
            if (a[y] > a[y + 1]) {
                // Swap values
                t = a[y];
                a[y] = a[y + 1];
                a[y + 1] = t;
            }
        }
    }
}

int rand(void) {
    static int rand_seed = 10;  // Seed initialized here
    rand_seed = rand_seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

int main() {
    int i;

    // Fill array with random numbers
    for (i = 0; i < MAX; i++) {
        a[i] = rand();
        printf("%d\n", a[i]);
    }

    // Sort the array using bubble sort
    bubble_sort();

    // Print sorted array
    printf("------------\n");
    for (i = 0; i < MAX; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
