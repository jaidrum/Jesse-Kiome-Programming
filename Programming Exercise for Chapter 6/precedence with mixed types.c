#include <stdio.h>
int main()
{
    int a,b,c;
    float result;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    {
        result = a+b*c;
        printf("Result without parentheses:%.2f\n",result);
    }
    {
        result = (a+b)*c;
        printf("Result with parentheses:%.2f\n",result);
    }
    return 0;

}
