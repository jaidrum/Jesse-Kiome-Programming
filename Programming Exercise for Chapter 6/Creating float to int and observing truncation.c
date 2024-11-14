#include <stdio.h>
int main()
{
    float a;
    int truncated;
    printf("Enter value of float number:");
    scanf("%f",&a);
    truncated = (int)a;
    printf("Original float:%f\n",a);
    printf("Truncated int:%d\n",truncated);
    return 0;

}
