#include <stdio.h>

int main() {
    float fahr, celsius;
    float start, end, step;

    // Ask for user input for starting, ending, and step values
    printf("Enter starting Fahrenheit value: ");
    scanf("%f", &start);
    printf("Enter ending Fahrenheit value: ");
    scanf("%f", &end);
    printf("Enter increment step: ");
    scanf("%f", &step);

    // Print header
    printf("\nFahrenheit to Celsius Table\n");
    printf("----------------------------\n");
    printf("Fahrenheit | Celsius\n");
    printf("----------------------------\n");

    // Calculation loop
    for (fahr = start; fahr <= end; fahr += step) {
        celsius = (fahr - 32) * 5.0 / 9.0;
        printf("%10.1f  | %7.1f\n", fahr, celsius);
    }

    return 0;
}
