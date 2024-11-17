#include <stdio.h>

int main() 
{
    float a;
    float mile;
    printf("Enter the value of distance in miles:");
    scanf("%f",&mile);
    a=mile*1.60934;
    printf("Value of distance in Km:%.2f.\n",a);
    return 0;
}
