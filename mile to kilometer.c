#include <stdio.h>

int main() {
    float miles, kilometers;
    float start, end, step;

    printf("Enter starting Miles value: ");
    scanf("%f", &start);
    printf("Enter ending Miles value: ");
    scanf("%f", &end);
    printf("Enter increment step: ");
    scanf("%f", &step);

    printf("\nMiles to Kilometers Table\n");
    printf("----------------------------\n");
    printf("  Miles  | Kilometers\n");
    printf("----------------------------\n");

    for (miles = start; miles <= end; miles += step) {
        kilometers = miles * 1.60934;
        printf("%8.1f | %10.3f\n", miles, kilometers);
    }

    return 0;
}
