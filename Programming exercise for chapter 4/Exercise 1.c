#include <stdio.h>
#include <string.h>

int main()
{
    int a[5];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
