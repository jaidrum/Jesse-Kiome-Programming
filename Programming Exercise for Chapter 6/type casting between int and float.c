#include <stdio.h>
int main()
{
    float result;
    int a,b;
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    {
        result = a/b;
        printf("Without typecasting:%.2f\n",result);
    }
    {
        result = (float)a/b;
        printf("With typecasting:%.2f\n",result);
    }
    return 0;

}
