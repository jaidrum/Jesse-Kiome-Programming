#include <stdio.h>

int main() {
    float pounds, kilograms;
    float start, end, step;

    printf("Enter starting Pounds value: ");
    scanf("%f", &start);
    printf("Enter ending Pounds value: ");
    scanf("%f", &end);
    printf("Enter increment step: ");
    scanf("%f", &step);

    printf("\nPounds to Kilograms Table\n");
    printf("----------------------------\n");
    printf(" Pounds  | Kilograms\n");
    printf("----------------------------\n");

    for (pounds = start; pounds <= end; pounds += step) {
        kilograms = pounds * 0.453592;
        printf("%8.1f | %9.3f\n", pounds, kilograms);
    }

    return 0;
}
