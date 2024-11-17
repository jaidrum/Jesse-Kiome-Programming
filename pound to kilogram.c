#include <stdio.h>

int main() 
{
    float a;
    float weight;
    printf("Enter weight value in pounds:");
    scanf("%f",& weight);
    a=weight*0.453592;
    printf("Value of weight in kg:%.2f",a);
    return 0;
}
