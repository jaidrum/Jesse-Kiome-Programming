#include <stdio.h>
#include <time.h>  // For using time function

#define MAX 10
int a[MAX];

int rand(void) {
    static int rand_seed = 0;
    if (rand_seed == 0) {  // Initialize seed only once
        rand_seed = time(NULL);  // Get current system time as seed
    }
    rand_seed = rand_seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

void bubble_sort() {
    int x, y, t;
    for (x = 0; x < MAX - 1; x++) {
        for (y = 0; y < MAX - x - 1; y++) {
            if (a[y] > a[y + 1]) {
                t = a[y];
                a[y] = a[y + 1];
                a[y + 1] = t;
            }
        }
    }
}

int main() {
    int i;

    // Fill array with random numbers
    for (i = 0; i < MAX; i++) {
        a[i] = rand();
        printf("%d\n", a[i]);
    }

    // Sort the array
    bubble_sort();

    // Print sorted array
    printf("------------\n");
    for (i = 0; i < MAX; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
